#include <iostream>
using namespace std;

bool check(int a[], int n){
    int cnt = 0;
    for(int i = 0; i < n; i++){
        cnt += a[i];
    }
    return cnt == 0;
}

int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    if(check(a,n)) cout << "EASY";
    else cout << "HARD";

    return 0;
}