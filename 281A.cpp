#include <iostream>
using namespace std;

string solve(string s){
    if(s[0] >= 97 && s[0] <= 122)
        s[0] -= 32;
    return s;
}

int main(){
    string s; cin >> s;
    cout << solve(s);
}