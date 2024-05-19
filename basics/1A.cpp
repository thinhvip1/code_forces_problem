#include <iostream>
using namespace std;
typedef long long ll;

ll min_flagstones(ll n, ll m, ll a){
    n = (n%a == 0) ? n/a : n/a + 1;
    m = (m%a == 0) ? m/a : m/a + 1;
    return n * m;
}

int main(){

    ll n, m, a;
    cin >> n >> m >> a;
    cout << min_flagstones(n, m, a);
    return 0;

}