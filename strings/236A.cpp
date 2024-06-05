#include <iostream>
using namespace std;

bool check(string s){
    bool distinct[26];
    fill(distinct, distinct + 26, false);

    int cnt = 0;
    for(char c : s){
        int index = (int)(c-97);
        if(distinct[index] == false){
            cnt++;
            distinct[index] = true;
        }
    }

    return cnt % 2 == 0;
}

int main(){
    string s; cin >> s;
    if(check(s))
        cout << "CHAT WITH HER!";
    else 
        cout << "IGNORE HIM!";
}