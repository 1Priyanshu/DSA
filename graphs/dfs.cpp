#include<bits/stdc++.h>
using namespace std;

const  int N = 1e5+10;
vector<int> graph[N];
bool vis[N];

void dfs(int vertex){
    // take action on vertex after entering the vertex
    cout<<"current vertex : "<<vertex<<endl;
    vis[vertex] = true;
    for(int child: graph[vertex]){
       // take action on child before entering the child
        if(vis[child]) continue;
        cout<<"vertex is: "<<vertex<<" child is: "<<child<<"\n";
        dfs(child);
        //take action on child after exiting the child
    }
    //take action on vertex before exiting the vertex
}

int main(){
    int n, m;
    cin>>n>>m;
    for(int i=0; i<m; i++){
        int v1, v2;
        cin>>v1>>v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }
    dfs(1);
}