#include <iostream>
using namespace std;

bool check(int n,string s){
    if(n < 26) return false;
    
    bool alpha[26];
    fill(alpha, alpha + 26, false);
    int cnt = 0;
    for(char c : s){
        if(c >= 97 && c <= 122)
            c -= 32;
        int index = (int)c - 65;
        if(alpha[index] == false){
            alpha[index] = true;
            cnt++;
        }
    }
    return cnt == 26;
}

int main(){
    int n; cin >> n;
    string s; cin >> s;
    if(check(n,s)) cout << "YES";
    else cout << "NO";
}