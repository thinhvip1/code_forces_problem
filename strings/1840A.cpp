#include <iostream>
using namespace std;

string decrypted_mess(string s, int n){
    string ans = "";
    char cur = s[0];
    int i;
    for(int i = 1; i < n; i++){
        if(cur == s[i]){
            ans += cur;
            if(i+1 < n){
                cur = s[i+1];
                i++;
            }
        }        
    }
    return ans;
}

int main(){
    int t; cin >> t;
    while(t--){
        int n; string s;
        cin >> n >> s;
        string ans = decrypted_mess(s, n);
        cout << ans << endl;
    }
}