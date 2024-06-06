#include <iostream>
using namespace std;

int solve(string s){
    int ans = 0, cur = 0;
    for(int i = 0; i < s.size(); i++){
        int tmp = (int) s[i] - 97;
        int cung_chieu = (tmp + 26 - cur) % 26,
        nguoc_chieu = (cur + 26 - tmp) % 26;

        if(cung_chieu < nguoc_chieu){
            ans += cung_chieu;
        }else{
            ans += nguoc_chieu;
        }
        cur = tmp;
    }
    return ans;
}

int main(){
    string s;
    cin >> s;
    int ans = solve(s);
    cout << ans;
}