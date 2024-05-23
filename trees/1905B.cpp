#include <iostream>
#include <vector>
using namespace std;
#define max_n 100001
#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl "\n"
vector<int> adj[max_n];

void input(int &n){
    cin >> n;
    for(int i = 1; i <= n; i++){
        adj[i].clear();
    }
    for(int i = 0; i < n-1; i++){
        int beg, en; cin >> beg >> en;
        adj[beg].push_back(en);
        adj[en].push_back(beg);
    }
}

int leaf(int n){
    int cnt = 0;
    for(int i = 1; i <= n; i++){
        if(adj[i].size() == 1)
            cnt++;
    }
    return cnt;
}

int main(){
    IOS;
    int tc; cin >> tc;
    while(tc--){
        int n;
        input(n);
        int number_of_leafs = leaf(n);
        cout << (number_of_leafs+1)/2 << endl;
    }
}