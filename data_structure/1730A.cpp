#include <iostream>
using namespace std;
#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl "\n"
#define max_n 101

void nhap(int a[], int &n, int &c){
    cin >> n >> c;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
}

int min_money(int a[], int n, int c){
    int cnt[max_n];
    fill(cnt, cnt + max_n, 0);
    for(int i = 0; i < n; i++){
        cnt[a[i]]++;
    }
    int ans = 0;
    for(int i = 1; i < max_n; i++){
        if(cnt[i]){
            if(cnt[i] < c)
                ans += cnt[i];
            else
                ans += c;
        }
    }
    return ans;
}

int main(){
    IOS;
    int tc; cin >> tc;
    while(tc--){
        int n, a[max_n], c;
        nhap(a, n, c);
        int ans = min_money(a, n, c);
        cout << ans << endl;
    }
}