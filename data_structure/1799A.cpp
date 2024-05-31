#include <iostream>
#include <set>
#include <queue>
#include <map>
using namespace std;

#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl "\n"
#define max_n 50001

void solve(int n, int m){
    set<int> present;
    queue<int> recent_action;
    map<int,int> ans;
    int removed_time = 0;
    for(int i = n; i >= 1; i--){
        present.insert(i);
        recent_action.push(i);
        ans[i] = -1;
    }

    for(int i = 0; i < m; i++){
        int x; cin >> x;
        removed_time++;
        if(!present.count(x)){
            ans[recent_action.front()] = removed_time;
            recent_action.pop();
            present.erase(recent_action.front());
            present.insert(x);
            recent_action.push(x);
        }
    }

    for(int i = 1; i <= n; i++){
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main(){
    IOS;
    int tc; cin >> tc;
    while(tc--){
        int n, m; cin >> n >> m;
        
        solve(n, m);
    }
    return 0;
}
