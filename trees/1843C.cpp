#include <iostream>
using namespace std;
typedef long long ll;

ll sum(ll n){
    ll res = 0;
    while(n >= 1){
        res += n;
        n /= 2;
    }
    return res;
}

int main(){
    int tc; cin >> tc;
    while(tc--){
        ll n; cin >> n;
        cout << sum(n) << endl;
    }
}