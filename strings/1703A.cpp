#include <iostream>
using namespace std;

bool check(char s[]){
    char tmp[4] = "YES";
    for(int i = 0; i < 3; i++){
        if(s[i] >= 97 && s[i] < 122)
            s[i] -= 32;
        if(s[i] != tmp[i])
            return false;
    }
    return true;
}

int main(){
    int t; cin >> t;
    while(t--){
        char s[3];
        for(int i = 0; i < 3; i++)
            cin >> s[i];
        if(check(s)) cout << "YES\n";
        else cout << "NO\n";
    }
}