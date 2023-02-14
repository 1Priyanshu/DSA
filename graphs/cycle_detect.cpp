#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+9;
vector <int> g[N];
bool vis[N];

bool dfs(int vertex ,int p){
    bool isLoopexists = false;
    vis[vertex] = true;
    for(auto i: g[vertex]){
        if(vis[i] && i==p) continue;
        if(vis[i]) return true;
        isLoopexists |= dfs(i,vertex);
    }
    return isLoopexists;
}

int main(){
    int n, m;
    cin>>n>>m;
    for(int i=0; i<m; i++){
        int v1, v2;
        cin>>v1>>v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }
    bool isLoopexists = false;
    for(int i=1; i<n; i++){
        if(vis[i])continue;
        if(dfs(i,-1)){
            isLoopexists = true;
            break;
        }
    }
    cout<<isLoopexists<<endl;
} 