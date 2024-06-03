#include <iostream>
using namespace std;

// brute_force
int solve1(int k, int l, int m, int n, int d){
    int cnt = 0;
    for(int i = 1; i <= d; i++){
        if(i%k==0 || i%l==0 || i%m==0 || i%n==0)
            cnt++;
    }
    return cnt;
}

int main(){
    int k,l,m,n,d; cin >> k >> l >> m >> n >> d;
    int ans = solve1(k,l,m,n,d);
    cout << ans;
}