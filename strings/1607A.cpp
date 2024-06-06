#include <iostream>
#include <map>
using namespace std;

int cnt_time(map<char,int> keys, string word){
    int cnt = 0;
    for(int i = 1; i < word.size(); i++){
        cnt += abs(keys[word[i]] - keys[word[i-1]]);
    }
    return cnt;
}

int main(){
    int t; cin >> t;
    while(t--){
        string tmp, word;
        map<char,int> keys;
        cin >> tmp >> word;
        for(int i = 0; i < tmp.size(); i++){
            keys[tmp[i]] = i+1;
        }
        int ans = cnt_time(keys, word);
        cout << ans << endl;
    }
}