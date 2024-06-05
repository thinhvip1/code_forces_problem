#include <iostream>
using namespace std;

int solve(int k, int r){
    int shovels = 1; // cai xeng
    while(shovels*k % 10 != r && shovels*k % 10 != 0){
        shovels++;
    }
    return shovels;
}

int main(){
    int k, r; cin >> k >> r;
    int ans = solve(k,r);
    cout << ans;
}