#include <iostream>
using namespace std;

int solve(string s, int n){
    int cnt = 0;
    for(int i = 0; i < s.size()-2; i++){
        if(s[i] == 'x' && s[i+1] == 'x' && s[i+2] == 'x'){
            cnt++;
        }
    }
    return cnt;
}

int main(){
    int n; cin >>n;
    string s; cin >> s;
    int ans = solve(s, n);
    cout << ans;
}