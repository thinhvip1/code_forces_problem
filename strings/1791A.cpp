#include <iostream>
using namespace std;

bool a[26] = {false};

void init(){
    string s = "codeforces";
    for(char c : s){
        a[(int)c-97] = true;
    }
}

int main(){
    init();
    int tc; cin >> tc;
    while(tc--){
        char c; cin >> c;
        if(a[(int)c-97]) cout << "YES\n";
        else cout << "NO\n";
    }
}