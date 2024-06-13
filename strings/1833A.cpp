#include <iostream>
#include <map>
using namespace std;

int min_melody(string s, int n){
    int cnt = 0;
    map<string,int> mp;
    string tmp;

    for(int i = 0; i < n-1; i++){
        tmp = "";
        tmp = tmp + s[i] + s[i+1];
        // cout << tmp << " ";
        if(mp[tmp] == 0){
            mp[tmp] = 1;
            cnt++;
        }
    }

    return cnt;
}

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        int ans = min_melody(s,n);
        cout << ans << endl;
    }
}