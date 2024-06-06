#include <iostream>
#include <vector>
using namespace std;

void solve(){
    string ans = "";

    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            char c; cin >> c;
            if(c >= 97 && c <= 122)
                ans += c;
        }
    }
    cout << ans << endl;
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
}