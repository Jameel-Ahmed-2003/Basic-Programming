// learn graph and then come bfs
#include <iostream>
#include <vector>
#include <queue>
using namespace std;
class graph
{
private:
    int numberOfVertices;
    vector<vector<int>> adjacencyList;

public:
    graph(int numberOfNodes)
    {
        numberOfVertices = numberOfNodes;
        adjacencyList.resize(numberOfVertices);
    }
    void addEdges(int vertex1, int vertex2, bool undirected = true)
    {
        adjacencyList[vertex1 - 1].push_back(vertex2);
        if (undirected)
            adjacencyList[vertex2 - 1].push_back(vertex1);
    }
    void printAdjacencyList()
    {
        cout << "ADJACENCY LIST CREATED : \n";
        for (auto row : adjacencyList)
        {
            for (auto edgePairs : row)
                cout << edgePairs << ", ";
            cout << endl;
        }
    }
    void bfs(int src)
    {
        int f;
        queue<int> q;
        vector<bool> visited(numberOfVertices, false);
        visited[src - 1] = true; //
        q.push(src - 1);         //
        while (!q.empty())
        {
            f = q.front();
            cout << f + 1 << " "; //
            q.pop();
            for (auto nbr : adjacencyList[f]) //
            {
                if (!visited[nbr - 1]) //
                {
                    visited[nbr - 1] = true;
                    q.push(nbr - 1);
                }
            }
        }
    }
};
int main()
{
    int v, v1, v2, traversal, edges;
    cout << "Enter the number of vertices : ";
    cin >> v;
    graph g(v);
    cout << "Enter the number of edges : ";
    cin >> edges;
    cout << "Enter the " << v << " node pairs :\n";
    for (size_t i = 0; i < edges; i++)
    {
        cin >> v1 >> v2;
        g.addEdges(v1, v2);
    }
    g.printAdjacencyList();
    cout << "Enter starting node : ";
    cin >> traversal;
    g.bfs(traversal);
    return 0;
}
