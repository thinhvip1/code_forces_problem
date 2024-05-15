#include <iostream>
using namespace std;

void check(string s){
    for(int i = 1; i < s.size(); i++){
        if(s[i] != s[0]){
            cout << "YES\n";
            swap(s[i],s[0]);
            cout << s << endl;
            return;
        }
        else continue;
    }

    cout << "NO\n";
}

int main(){
    int tc; cin >> tc;
    while(tc--){
        string s; cin >> s;
        check(s);
    }
}