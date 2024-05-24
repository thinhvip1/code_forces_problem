#include <iostream>
#include <vector>
#include <queue>

using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
#define max_n 1001

vector<int> adj[max_n];

void nhap(int &n){
    cin >> n;
    for(int i = 0; i < n-1; i++){
        int parent; cin >> parent;
        adj[parent].push_back(i+2);
    }
}

bool bfs(int root){
    queue<int> q;
    q.push(root);

    while(q.empty() == false){
        int cnt_leaf = 0, cur_node = q.front();
        q.pop();
        for(int neibor : adj[cur_node]){
            if(adj[neibor].size()==0)
                cnt_leaf++;
            else{
                q.push(neibor);
            }
        }
        if(cnt_leaf < 3) 
            return false;
    }
    return true;
}

int main(){
    
    int n;
    nhap(n);

    if(bfs(1))
        cout << "YES";
    else 
        cout << "NO";

    return 0;
}