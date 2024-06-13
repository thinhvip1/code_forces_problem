#include <iostream>
using namespace std;

string max_val(string s, char c, unsigned int n){
    if(c == '0')
        return s + c;
    if(c == '9')
        return c + s;
    unsigned int idx;
    bool flag = false;
    string ans = "";
    for(unsigned int i = 0; i < n; i++){
        if(c > s[i]){
            idx = i;
            flag = true;
            break;
        }else if(c < s[i]){
            idx = i;
        }
    }
    if(flag){
        if(idx == 0)
            ans = c + s;
        else
            ans = s.substr(0,idx) + c + s.substr(idx);
    }else{
        // trường hợp tất cả các chữ số của s bằng c
        ans = s + c;
    }
    
    return ans;
}

int main(){
    int t; cin >> t;
    while(t--){
        unsigned int n; char c;
        string s;
        cin >> n >> c >> s;
        string ans = max_val(s,c,n);
        cout << ans << endl;
    }
}