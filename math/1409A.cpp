#include <iostream>

using namespace std;

int min_moves(int a, int b){
    
    int k, ans = 0;
    if(a < b){
        k = (b - a);
    }else{
        k = (a - b);
    }
    if(k % 10 > 0)
        ans = k/10 + 1;
    else 
        ans = k/10;

    return ans;
}

int main(){
    int t; cin >> t;
    while(t--){
        int a,b; cin >> a >> b;
        int ans = min_moves(a, b);
        cout << ans << endl;
    }
}