#include <iostream>
#include <vector>
using namespace std;
#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl "\n"
#define max_n 200001
typedef long long ll;

int main(){
    IOS;
    int tc; cin >> tc;
    while(tc--){
        int n, q; cin >> n >> q;
        vector<ll> v(n+1);
        v[0] = 0;
        for(int i = 1; i < n+1; i++){
            cin >> v[i];
            v[i] += v[i-1];
        }

        while(q--){
            ll l, r, k; 
            cin >> l >> r >> k;
            ll ans = v[n] - (v[r] - v[l-1]) + (r - l + 1) * k;
            if(ans % 2 == 1)
                cout << "YES" << endl;
            else    
                cout << "NO" << endl;
        }
    }

    return 0;
}