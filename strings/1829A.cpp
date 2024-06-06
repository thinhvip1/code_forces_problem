#include <iostream>
using namespace std;

int solve(string s){
    string tmp = "codeforces";
    int cnt = 0;
    for(int i = 0; i < 11; i++){
        if(s[i] != tmp[i])
            cnt++;
    }
    return cnt;
}

int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int ans = solve(s);
        cout << ans << endl;
    }
}