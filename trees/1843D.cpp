#include <iostream>
#include <vector>
using namespace std;
#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl "\n"
#define max_n 200001

vector<int> adj[max_n];

void nhap(int &n){
    cin >> n;
    for(int i = 0; i < n-1; i++){
        int beg, en; cin >> beg >> en;
        adj[beg].push_back(en);
        adj[en].push_back(beg);
    }
}

int count(int x, int y){
    int cnt;
    
}

int main(){
    IOS;
    int tc; cin >> tc;
    while(tc--){
        int n;
        nhap(n);
        int q; cin >> q;
        while(q--){
            int x,y; cin >> x >> y;
            cout << count(x,y) << endl;
        }
    }
}