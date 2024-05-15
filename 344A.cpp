#include <iostream>
using namespace std;

int groups(int a[], int n){
    int cnt = 1;

    for(int i = 1; i < n; i++){
        if(a[i] != a[i-1])
            cnt++;
        else
            continue;        
    }

    return cnt;
}

int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    cout << groups(a,n);
    return 0;
}