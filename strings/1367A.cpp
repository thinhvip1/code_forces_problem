#include <iostream>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

string solve(string s){
    string ans = "";
    ans += s[0];
    for(int i = 1; i < s.size()-1; i+=2){
        ans += s[i];
    }
    ans += s[s.size()-1];
    return ans;
}

int main(){
    IOS;
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        string ans = solve(s);
        cout << ans << endl;
    }
}