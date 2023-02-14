// O(v+E)  connected components in a graph
#include<bits/stdc++.h>
using  namespace std;

const int N = 1e5+10;
bool vis[N];
vector<int> G[N];
vector<vector<int>> cc;
vector<int> curr_c;

void dfs(int node){
    vis[node] = true;
    curr_c.push_back(node);
    for(auto child: G[node]){
        if(vis[child]) continue;
        dfs(child);
    }
}

int main(){
    int n, e;
    cin>>n>>e;
    for(int i=0; i<e; i++){
        int v1, v2;
        cin>>v1>>v2;
        G[v1].push_back(v2);
        G[v2].push_back(v1);
    }
    int cnt =0;
    for(int i=1;i<=n; i++ ){
        if(vis[i]) continue;
        curr_c.clear();
        dfs(i);
        cc.push_back(curr_c);
        cnt++;
    }
    cout<<cc.size()<<endl;  // number of connected components
    for(auto i: cc){
        for(auto element: i){
            cout<<element<<" ";
        }
        cout<<endl;
    }
}

