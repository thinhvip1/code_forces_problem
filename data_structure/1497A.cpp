#include <iostream>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
#define max_n 101

void nhap(int a[], int &n){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
}

void solve(int a[], int n){
    int cnt[max_n];
    bool visited[max_n];
    fill(cnt, cnt+max_n, 0);
    fill(visited, visited + max_n, false);
    int max_num = -1;
    for(int i = 0; i < n; i++){
        cnt[a[i]]++;
        if(max_num < a[i])
            max_num = a[i];
    }

    for(int i = 0; i <= max_num; i++){
        if(cnt[i] && !visited[i]){
            cout << i << " ";
            visited[i] = true;
            cnt[i]--;
        }
    }
    for(int i = 0; i <= max_num; i++){
        while(cnt[i]){
            cout << i << " ";
            cnt[i]--;
        }
    }
}

int main(){
    int tc; cin >> tc;
    while(tc--){
        int n, a[max_n];
        nhap(a,n);
        solve(a,n);
        cout << endl;
    }
}