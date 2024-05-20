#include <iostream>
#include <vector>
using namespace std;
#define max_n 200001

vector<int> adj[max_n];
bool visited[max_n];
int parents[max_n];

void input(int &n){
    fill(visited, visited+max_n, false);
    fill(parents, parents+max_n,-1);
    cin >> n;
    for(int i = 2; i <= n; i++){
        int parent; cin >> parent;
        adj[parent].push_back(i);
    }
}

void dfs(int cur_node, int n){
    visited[cur_node] = true;
    if(cur_node == n) 
        return;
    if(visited[cur_node])
        for(int neibor : adj[cur_node]){
            if(!visited[neibor]){
                parents[neibor] = cur_node;
                dfs(neibor, n);
            }
        }
}

int main(){
    int n;

    input(n);

    dfs(1, n);

    vector<int> path;
    while(n != 1){
        path.push_back(n);
        n = parents[n];
    }
    path.push_back(1);
    for(int i = path.size()-1; i >= 0; i--)
        cout << path[i] << " ";

    return 0;
}