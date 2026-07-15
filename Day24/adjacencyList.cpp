#include<iostream>
#include<vector>
using namespace std;
int main(){
    int V;
    cout<<"Enter the number of vertices:";
    cin>>V;
    int E;
    cout<<"Enter the number of edges:";
    cin>>E;
    //create a matrix of size(v+1)*(v+1) and take edges input
    vector<int>adj[V+1];
    for(int i=1;i<=E;i++){
        int u,v;
        cout<<"Enter u and v:";
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    //print the graph
    for(int i=1;i<=V;i++){
        cout<<i<<"->";
        for(int j=0;j<adj[i].size();j++){
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
}
// time complexity is O(V+E) where V is the number of vertices and E is the number of edges
// space complexity is O(V+E) where V is the number of vertices and E is the number of edges