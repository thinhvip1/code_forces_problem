#include <iostream>
using namespace std;

void solve(int n){
    char ans[4];
    int i = 2;
    while(n >= 28){
        ans[i] = 'z';
        n -= 26;
        i--;
    }
    if(i == 2){
        ans[i] = (char)(n-2+96);
        i--;
        n = 2;
    }
    if(i == 1){
        ans[i] = (char)(n-1+96);
        i--;
        n = 1;
    }
    if(i == 0)
        ans[i] = (char)(n+96);
    for(int i = 0; i < 3; i++)
        cout << ans[i];
    cout << endl;
}

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        solve(n);
    }
}