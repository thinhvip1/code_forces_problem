#include <iostream>
#include <set>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
#define max_n 100001


void nhap(int n, int m, int &star){
    set<int> nodes;
    for(int i = 0; i < m; i++){
        int a,b,c; cin >> a >> b >> c;
        nodes.insert(b);   
    }

    for(int i = 1; i <= n; i++){
        if(nodes.find(i) == nodes.end()){
            star = i;
            break;
        }
    }
}

void display_tree(int n, int m, int star){
    for(int i = 1; i <= n; i++){
        if(i != star){
            cout << star << " " << i << endl;
        }
    }
}

int main(){
    IOS;
    int tc; cin >> tc;
    while(tc--){
        int n, m, star; cin >> n >> m;
        nhap(n,m,star);
        display_tree(n, m, star);
    }
}