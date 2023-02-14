#include<bits/stdc++.h>
using namespace std;

const int N = 1e3+10;
int graph1[N][N];  //Adjacanecy matrix;
vector<pair<int,int>> graph2[N];  // Adjacency List;

int  main(){
    int n, m;
    cin>>n>>m;
    for(int i=0; i<m ; i++){
        int v1, v2, w;  // node v1 connects to node v2 with edge weight 'w'
        cin>>v1>>v2>>w;

        graph1[v1][v2] = w;
        graph1[v2][v1] = w;


        graph2[v1].push_back(make_pair(v2, w));
        graph2[v2].push_back({v1,w});
    }
}
/*
Adjacency matrix 
space complexity = O(n^n) = O(V*V)
n<=10^4

Adjacency List
space compplxity = O(V+E) = O(n+m)
E<= 10^7
*/

/*
Q- find if node i connected to j and hence find edge weight


Adjacency matrix-
 if(graph[i][j]!=0){
    weight = graph[i][j];    O(1)
}

adjacency List- 
for(pair<int, int> i: graph2[i]){
    if(i.first==j){     //O(E)
        weight = i.second
    }
}
*/
