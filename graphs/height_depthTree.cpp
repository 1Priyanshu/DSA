#include<bits/stdc++.h>
using namespace std;

const int N =1e5;
vector<int> g[N];
vector<int> height(N);
vector<int> depth(N);

void dfs(int vertex, int par=0){
    
    for(auto child: g[vertex]){
        if(child==par){continue;}
        depth[child] = depth[vertex] +1;
        dfs(child, vertex);
        height[vertex] = max(height[vertex], height[child]+1);
    }

}

int main(){
    int n, m;
    cin>>m;  // no. of edges
    for(int i=0; i<m-1; i++){
        int v1, v2;
        cin>>v1>>v2;
        g[v1].push_back(v2);
        //g[v2].push_back(v1);
    }

    for(int i=1;i<=m;i++){dfs(i);}
    for(int i=1; i<=m; i++){
        cout<<height[i]<<" "<<depth[i]<<endl;
    }

}