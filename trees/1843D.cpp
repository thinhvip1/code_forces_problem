#include <iostream>
#include <vector>
using namespace std;
#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl "\n"
#define max_n 200001

vector<int> adj[max_n];
int child_leaf[max_n];
bool visited[max_n];

void nhap(int &n){
    for(int i = 0; i < max_n; i++)
        adj[i].clear();

    cin >> n;
    for(int i = 0; i < n-1; i++){
        int beg, en;
        cin >> beg >> en;
        adj[beg].push_back(en);
        adj[en].push_back(beg);
    }
}

int count(int cur_node){
    if(adj[cur_node].size() == 1 && cur_node != 1){
        visited[cur_node] = true;
        child_leaf[cur_node] = 1;
        return 1;
    }
    visited[cur_node] = true;
    if(visited[cur_node])
        for(int child : adj[cur_node]){
            if(!visited[child])
                child_leaf[cur_node] += count(child);
        }

    return child_leaf[cur_node];
}

int main(){
    IOS;
    int tc; cin >> tc;
    while(tc--){
        int n;
        nhap(n);

        fill(child_leaf, child_leaf + max_n, 0);
        fill(visited, visited+max_n, false);

        count(1);

        int q; cin >> q;
        while(q--){
            int x,y; cin >> x >> y;
            long long ans = 1ll * child_leaf[x] * child_leaf[y];
            cout << ans << endl;
        }
        
    }

    return 0;
}