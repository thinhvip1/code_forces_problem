#include <iostream>
using namespace std;

bool check(string s, int n){
    string ans = "";
     
    for(int i = 0; i < n; i++){
        if(s[i] == 32)
            return false;
        if(s[i] >= 65 && s[i] <= 90)
            s[i] += 32;
        if(i == 0 || s[i] != s[i-1])
            ans = ans + s[i];
    } 

    return ans == "meow";
}

int main(){
    int t; cin >> t;
    while(t--){
        int n; string s;
        cin >> n >> s;
        if(check(s,n))
            cout << "YES\n";
        else cout << "NO\n";
    }
}