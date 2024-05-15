#include <iostream>
using namespace std;

bool check_lucky_number(string s){
    int cnt = 0;
    for(char c : s){
        if(c == '4' || c=='7')
            cnt++;
    }
    return (cnt == 4 || cnt == 7);
}

int main(){
    string s; cin >> s;
    if(check_lucky_number(s))
        cout << "YES";
    else 
        cout << "NO";
}