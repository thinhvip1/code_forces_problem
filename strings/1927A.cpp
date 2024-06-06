#include <iostream>
using namespace std;
#define max_n 10

int min_length(string s, int n){
    int l = 0, r = n-1;
    while(l < n){
        if(s[l] == 'B')
            break;
        l++;
    }
    while(r > l){
        if(s[r] == 'B')
            break;
        r--;
    }
    return r-l+1;
}

int main(){
    int t; cin >> t;
    while(t--){
        int n;
        string s;
        cin >> n >> s;
        int ans = min_length(s,n);
        cout << ans << endl;
    }
}