#include<iostream>
#include<vector>
using namespace std;

void dfs(int start, vector<int> adj[], vector<bool>& visited) {
    visited[start] = true;
    cout << start << " ";
    for (int neighbor : adj[start]) {
        if (!visited[neighbor]) {
            dfs(neighbor, adj, visited);
        }
    }
}
int main(){
    int V;
    cout << "Enter the number of vertices: ";
    cin >> V;
    vector<int> adj[V];
    int E;
    cout << "Enter the number of edges: ";
    cin >> E;
    for (int i = 0; i < E; i++) {
        int u, v;
        cout << "Enter edge " << i + 1 << ": ";
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<bool> visited(V, false);
    dfs(0, adj, visited);
    return 0;   
}