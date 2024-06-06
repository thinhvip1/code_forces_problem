#include <iostream>
using namespace std;

bool check(string s, char c){
    for(int i = 0; i < s.size(); i++){
        if(c == s[i] && i % 2 == 0)
            return true;
    }
    return false;
}

int main(){
    int t; cin >> t;
    while(t--){
        string s; char c;
        cin >> s >> c;
        if(check(s,c))
            cout << "YES\n";
        else cout << "NO\n";
    }    
}