#include <iostream>
using namespace std;

int solve(string s){
    string pi = "31415926535897932384626433832795";
    int cnt = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == pi[i])
            cnt++;
        else 
            break;
    }
    return cnt;
}

int main(){
    int t; cin >> t;
    while(t--){
        string s; 
        cin >> s;
        int ans = solve(s);
        cout << ans << endl;
    }
}