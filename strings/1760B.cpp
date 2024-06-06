#include <iostream>
using namespace std;

int max_size(string s, int n){
    int res = 0;
    for(int i = 0; i < n; i++){
        if(res < (int)s[i] - 96)
            res = (int)s[i] - 96;
    }
    return res;
}

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        int ans = max_size(s,n);
        cout << ans << endl;
    }
}