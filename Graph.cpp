//graph to adjacency matrix and adjacency list
#include<iostream>
#include<utility>
#include<vector>
using namespace std;
int main()
{
    int n_nodes,n_edges;
    cout<<"Enter the number of nodes : ";
    cin>>n_nodes;
    // n_nodes++;
    cout<<"Enter the number of edges : ";
    cin>>n_edges;
    vector<pair<int,int>>edges(n_edges);
    cout<<"Enter pairs of connected nodes :\n";
    for(size_t i=0;i<edges.size();i++)
    cin>>edges[i].first>>edges[i].second;
    for(size_t i=0;i<edges.size();i++)
    cout<<"("<<edges[i].first<<", "<<edges[i].second<<")"<<endl;
    vector<vector<int>>adjacencyMatrix(n_nodes,vector<int>(n_nodes,0));
    vector<vector<int>>adjacencyList(n_nodes);
    for(auto edge:edges)
    {
        int u=edge.first;
        int v=edge.second;
        cout<<u<<" "<<v<<endl;
        adjacencyMatrix[u-1][v-1]=1;
        adjacencyMatrix[v-1][u-1]=1;
    }
    for(size_t i=0;i<n_nodes;i++)
    {
        for(size_t j=0;j<n_nodes;j++)
        {
            if(adjacencyMatrix[i][j]==1)
            adjacencyList[i].push_back(j+1);
        }
    }
    cout<<"ADJACENCY MATRIX : \n";
    for(size_t i=0;i<n_nodes;i++)
    {
        for(size_t j=0;j<n_nodes;j++)
        cout<<adjacencyMatrix[i][j]<<" ";
        cout<<endl;
    }
    cout<<"ADJACENCY LIST : \n";
    for(size_t i=0;i<adjacencyList.size();i++)
    {
        for(size_t j=0;j<adjacencyList[i].size();j++)
        cout<<adjacencyList[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
