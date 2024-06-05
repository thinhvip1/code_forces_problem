#include <iostream>
using namespace std;
#define max_n 1000000
typedef long long ll;

ll a[max_n];

ll solve(int n){
    ll ans = 0, max_val = -1;
    for(int i = 0; i < n; i++){
        if(a[i] > max_val)
            max_val = a[i];
        ans += a[i];
    }
    ans = max_val * n - ans;
    return ans;
}

int main(){
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    ll ans = solve(n);
    cout << ans;
}