#include <iostream>
using namespace std;
#define max_n 200001
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"

// int a[max_n], fre[max_n];
void nhap(int a[], int &n){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
}
int cnt_moves(int a[], int n){
    int fre[max_n];
    fill(fre, fre+max_n, 0);

    for(int i = n-1; i >= 0; i--){
        fre[a[i]]++;
        if(fre[a[i]] == 2){
            return i+1;
        }
    }
    return 0;
}

int main(){
    IOS;
    int t; cin >> t;
    while(t--){
        int n, a[max_n];
        nhap(a,n);
        int ans = cnt_moves(a,n);
        cout << ans << endl;
    }
    return 0;
}