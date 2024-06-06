#include <iostream>
#include <map>
using namespace std;

string max_fre(string s){
    map<string,int> mp;
    string ans;
    int max_frequency = 0;
    for(int i = 0; i < s.size()-1; i++){
        string tmp = "";
        tmp = tmp + s[i] + s[i+1];
        // cout << tmp << " ";
        mp[tmp]++;
    }
    for(auto it : mp){
        if(max_frequency < it.second){
            max_frequency = it.second;
            ans = it.first;
        }
    }
    return ans;
}

int main(){
    int n; cin >> n;
    string s, ans; cin >> s;
    ans = max_fre(s);
    cout << ans;
}