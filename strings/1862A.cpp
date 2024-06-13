#include <iostream>
#include <vector>
using namespace std;

bool check(vector<string> v, int n, int m){
    string name = "vika";
    int index = 0;
    
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(v[j][i] == name[index]){
                index++;
                break;
            }
        }
    }

    return index == 4;
}

int main(){
    int t; cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        vector<string> v(n);

        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
        if(check(v,n,m))
            cout << "YES\n";
        else cout << "NO\n";
    }
}