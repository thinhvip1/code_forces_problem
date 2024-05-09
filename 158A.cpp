#include <iostream>

using namespace std;

int passed_contestants(int a[], int n, int k){
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(a[i] <= 0)
            return cnt;
        if(a[i] >= a[k-1])
            cnt++;
    }
    return cnt;
}

int main(){
    int n, k; cin >> n >> k;
    int a[n];
    cout << passed_contestants(a, n, k);
}