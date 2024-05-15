#include <iostream>
using namespace std;
typedef long long ll;

ll borrow_dollar(int k, int n, int w){
    ll ans;

    ans = (ll) (k+k*(w))*w/2; // công thức tính tổng của cấp số cộng

    if(ans >= n)
        return ans - n; // số tiền mà anh phải vay bạn
    return 0;
}

int main(){
    // k : dollars for first bananas
    // n : dollars he has
    // w : number of bananas he wants buy
    int k, n, w; cin >> k >> n >> w; 

    cout << borrow_dollar(k,n,w);

    return 0;
}