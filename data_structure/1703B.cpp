#include <iostream>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int total_balloons(string s){
    bool visited[26];
    fill(visited, visited+26, false);
    int cnt = 0;
    for(char c : s){
        if(visited[c-65] == false){
            cnt += 2;
            visited[c-65] = true;
        }
        else cnt++;
    }
    return cnt;
}

int main(){
    IOS;
    int tc; cin >> tc;
    while(tc--){
        int n; cin >> n;
        string s; cin >> s;
        int ans = total_balloons(s);
        cout << ans << endl;
    }
}