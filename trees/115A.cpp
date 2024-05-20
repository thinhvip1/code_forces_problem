#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
#define max_n 2001

// vector<int> adj[max_n];
int height[max_n];

void input(int &n, vector<int> adj[]){
    fill(height, height+max_n, 0);
    cin >> n;
    for(int i = 1; i <= n; i++){
        int parent; cin >> parent;
        if(parent != -1)
            adj[parent].push_back(i);
    }
}

int dfs(int cur_node, vector<int> adj[]){

    if(adj[cur_node].empty()) {
        height[cur_node] = 1;
        return 1;
    }
    else{
        for(int neibor : adj[cur_node]){
            height[cur_node] = max(height[cur_node],dfs(neibor, adj) + 1);
        }
        return height[cur_node];
    }
        
}

int main(){
    int n;
    vector<int> adj[max_n];
    int min_groups = 0;

    input(n,adj);

    for(int i = 1; i <= n; i++){
        if(height[i] == 0)
            min_groups = max(min_groups,dfs(i,adj));
    }

    cout << min_groups;

    return 0;
}