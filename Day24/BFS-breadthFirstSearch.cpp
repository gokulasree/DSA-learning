#include<iostream>
#include<vector>
#include<queue>
using namespace std;
void bfs(int start, vector<int> adj[], vector<bool>& visited) {
    queue<int> q;
    visited[start] = true;
    q.push(start);
    while (!q.empty()) {
        int node = q.front();
        q.pop();
        cout << node << " ";
        for (int neighbor : adj[node]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.push(neighbor);
            }
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
    bfs(0, adj, visited);
    return 0;   
}