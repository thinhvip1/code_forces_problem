#include <iostream>
using namespace std;

int min_moves(int a, int b){
    int ans = a % b;
    if(ans != 0)
        ans = b - ans;
    return ans;
}

int main(){
    int t; cin >> t;
    while(t--){
        int a, b, ans; cin >> a >> b;
        ans = min_moves(a,b);
        cout << ans << endl; 
    }
}