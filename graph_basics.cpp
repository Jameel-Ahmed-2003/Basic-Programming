//graph to adjacency matrix, adjacency list, bfs and dfs traversal
#include<iostream>
#include<utility>
#include<vector>
#include<queue>
#include<stack>
using namespace std;
int i,j;
vector<pair<int,int>>createPairofNodes(int n_edges)
{
    vector<pair<int,int>>newEdges(n_edges);
    cout<<"Enter pairs of connected nodes :\n";
    for(i=0;i<n_edges;i++)
    cin>>newEdges[i].first>>newEdges[i].second;
    return newEdges;
}
vector<vector<int>>createAdjacencyMatrix(int n_nodes,auto edges)
{
    vector<vector<int>>newAdjacency(n_nodes,vector<int>(n_nodes,0));
    for(auto edge:edges)
    {
        int x=edge.first-1;
        int y=edge.second-1;
        newAdjacency[x][y]=1;
        newAdjacency[y][x]=1;
    }
    return newAdjacency;
}
vector<vector<int>>createAdjacencyList(auto adjacencyMatrix,int n_nodes)
{
    vector<vector<int>>adjacencyList(n_nodes);
    for(i=0;i<n_nodes;i++)
    {
        for(j=0;j<n_nodes;j++)
        {
            if(adjacencyMatrix[i][j]==1)
            adjacencyList[i].push_back(j+1);
        }
    }
    return adjacencyList;
}
void printCreatedNodePairs(auto a)
{
    cout<<"CREATED PAIR OF NODES :\n";
    for(auto x:a)
    {
        cout<<"("<<x.first<<", "<<x.second<<")\n";
    }
}
void printAdjacencyMatrix(auto a,int n_nodes)
{
    cout<<"CREATED ADJACENCY MATRIX :\n";
    for(i=0;i<n_nodes;i++)
    {
        for(j=0;j<n_nodes;j++)
        cout<<a[i][j]<<" ";
        cout<<endl;
    }
}
void printAdjacencyList(auto a)
{
    cout<<"CREATED ADJACENCY LIST :\n";
    i=1;
    for(auto row:a)
    {
        cout<<"Node "<<i++<<" is connected with ";
        for(auto col:row)
        cout<<col<<" ";
        cout<<endl;
    }
}
void bfsTraversal(auto List,int n)
{
    vector<bool>visited(n,false);
    queue<int>q;
    int start;
    cout<<"Enter starting node : ";
    cin>>start;
    q.push(start);
    visited[start-1]=true;
    cout<<"BFS traversal starting from node "<<start<<" : ";
    while(!q.empty())
    {
        int node=q.front();
        q.pop();
        cout<<node<<" ";
        for(auto neighbor:List[node-1])
        {
            if(!visited[neighbor-1])
            {
                visited[neighbor-1]=true;
                q.push(neighbor);
            }
        }
    }
    cout<<endl;
}
void dfsTraversal(auto List)
{
    int start;
    cout<<"Enter the starting node : ";
    cin>>start;
    vector<bool>visited(List.size()-1,0);
    stack<int>s;
    s.push(start);
    cout<<"DFS traversal from starting node "<<start<<" : ";
    while(!s.empty())
    {
        int node=s.top();
        s.pop();
        if(!visited[node-1])
        {
            cout<<node<<" ";
            visited[node-1]=true;
        }
        for(auto neighbor=List[node-1].rbegin();neighbor<List[node-1].rend();++neighbor)
        {
            if(!visited[*neighbor-1])
            s.push(*neighbor);
        }
    }
    cout<<endl;
}
int main()
{
    int n_nodes,n_edges;
    cout<<"Enter the number of nodes : ";
    cin>>n_nodes;
    cout<<"Enter the number of edges : ";
    cin>>n_edges;
    vector<pair<int,int>>edges=createPairofNodes(n_edges);
    printCreatedNodePairs(edges);
    vector<vector<int>>adjacencyMatrix=createAdjacencyMatrix(n_nodes,edges);
    printAdjacencyMatrix(adjacencyMatrix,n_nodes);
    vector<vector<int>>adjacencyList=createAdjacencyList(adjacencyMatrix,n_nodes);
    printAdjacencyList(adjacencyList);
    bfsTraversal(adjacencyList,n_edges);
    dfsTraversal(adjacencyList);
    return 0;
}
