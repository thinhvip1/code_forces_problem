#include <iostream>
using namespace std;

bool check(string s){
    int cnt = 1;
    for(int i = 0; i < s.size()-1; i++){
        if(s[i] == s[i+1])
            cnt++;
        else cnt = 1;
        if(cnt == 7) return true;
    }
    return false;
}

int main(){
    string s; cin >> s;
    if(check(s)) cout << "YES";
    else cout << "NO";
}