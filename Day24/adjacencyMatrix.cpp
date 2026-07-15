#include<iostream>
#include<vector>
using namespace std;
int main(){
    int V;
    cout<<"Enter the number of vertices: "<<endl;
    cin>>V;
    int E;
    cout<<"Enter the number of edges: "<<endl;
    cin>>E;
    
    // create a matrix of size (v+1)*(v+1) and 
    vector<vector<bool>> adj(V+1,vector<bool>(V+1,false));
     
    // take input of edges from the user
    for(int i=1;i<=E;i++){
        int u,v;
        cout<<"Enter the edge: "<<endl;
        cin>>u>>v;
        adj[u][v]=true;
        adj[v][u]=true;
    }

    // print the graph
    for(int i=1;i<=V;i++){
        for(int j=1;j<=V;j++){
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// time complexity is O(V^2) where V is the number of vertices
// space complexity is O(V^2) where V is the number of vertices