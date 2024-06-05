#include <iostream>

using namespace std;

void solve(string s){
    if(s.size() <= 10)
        cout << s << endl;
    else{
        cout << s[0] << s.size()-2 << s[s.size()-1] << endl;
    }
}

int main(){
    int tc; cin >> tc;
    while(tc--){
        string s; cin >> s;
        solve(s);
    }
    
}