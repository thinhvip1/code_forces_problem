#include <iostream>
using namespace std;

int check_win(string s, int n){
    int cnt_A = 0;
    for(char c : s){
        if(c == 'A')
            cnt_A++;
    }
    int cnt_D = n - cnt_A;

    if(cnt_A == cnt_D) return 0;
    if(cnt_A > cnt_D) return 1;
    return -1;
}

int main(){
    int n; cin >> n;
    string s; cin >> s;
    if(check_win(s, n) == 1)
        cout << "Anton";
    else if(check_win(s, n) == -1)
        cout << "Danik";
    else 
        cout << "Friendship";
}