#include <iostream>
using namespace std;

int min_width(int a[], int n, int h){
    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(a[i] <= h) cnt++;
        else cnt += 2;
    }
    return cnt;
}

int main(){
    int n, h; cin >> n >> h;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    cout << min_width(a,n,h);
    return 0;
}