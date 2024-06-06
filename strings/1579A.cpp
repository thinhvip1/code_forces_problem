#include <iostream>
using namespace std;

bool check(string s){
    int cnt_A = 0, cnt_B = 0, cnt_C = 0;
    for(char c : s){
        if(c == 'A')
            cnt_A++;
        else if(c == 'B')
            cnt_B++;
        else 
            cnt_C++;
    }
    return cnt_B == (cnt_A + cnt_C);
}

int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        if(check(s))
            cout << "YES\n";
        else    
            cout << "NO\n";
    }
}