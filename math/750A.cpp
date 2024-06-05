#include <iostream>
using namespace std;

int solve(int n, int k){
    int sum_max = (240-k)/5;
    for(int i = n; i >= 0; i--){
        if((1+i)*i/2 <= sum_max)
            return i;
    }
    return 0;
}

int main(){
    int n, k; cin >> n >> k;
    int ans = solve(n,k);
    cout << ans;
}