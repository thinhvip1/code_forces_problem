#include <iostream>
using namespace std;
#define endl "\n"

int two_last(long long n){
    int ans = 1;
    for(int i = 0; i < n; i++){
        ans *= 5;
        ans %= 100; 
    }
    return ans;
}

int main(){
    long long n; cin >> n;
    // cout << two_last(n);
    cout << "25";
}