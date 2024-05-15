#include <iostream>
using namespace std;
typedef long long ll;

int main(){
    ll n; cin >> n;
    ll ans;
    if(n%2==0)
        ans = n/2;
    else
        ans = (n-1)/2 - n;
    cout << ans;
    return 0;
}