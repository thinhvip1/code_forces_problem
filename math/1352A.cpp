#include <iostream>
#include <vector>
using namespace std;

void solve(int n){
    vector<int> ans;
    int cs = 1;
    while(n != 0){
        int remainder = n%10; // số dư
        if(remainder != 0)
            ans.push_back(remainder*cs);
        n /= 10;
        cs *= 10;
    }

    cout << ans.size() << endl;
    for(int x : ans){
        cout << x << " ";
    }
}
int main(){
    int tc; cin >> tc;
    while(tc--){
        int n; cin >> n;
        solve(n);
        cout << endl;
    }
}