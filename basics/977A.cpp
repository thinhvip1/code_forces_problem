#include <iostream>
using namespace std;

int result(int n, int k){
    for(int i = 0; i < k; i++){
        if(n % 10 == 0)
            n /= 10;
        else n--;
    }
    return n;
}

int main(){
    int n,k; cin >> n >> k;
    cout << result(n,k);
    return 0;
}