#include <iostream>
using namespace std;

int deleted_zeros(string s){
    int cnt = 0, l = 0, r = s.size()-1;
    while(l < r && s[l] == '0'){
        l++;
    }
    while(l < r && s[r] == '0'){
        r--;
    }
    for(int i = l+1; i < r; i++){
        if(s[i] != '1')
            cnt++;
    }
    return cnt;
}

int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int ans = deleted_zeros(s);
        cout << ans << endl;
    }
}