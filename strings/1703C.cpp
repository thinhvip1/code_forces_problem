#include <iostream>
#include <vector>
using namespace std;

void solve(vector<string> v, int a[], int n){
    for(int i = 0; i < n; i++){
        int cnt_U = 0, cnt_D = 0;
        for(char c : v[i]){
            if(c == 'D')
                cnt_D++;
            else 
                cnt_U++;
        }
        // cout << cnt_D << " " << cnt_U << endl;
        a[i] = (cnt_D - cnt_U + a[i] + 10) % 10;
    }   

    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        vector<string> v(n);
        for(int i = 0; i < n; i++){
            int size; cin >> size;
            cin >> v[i];
        }
        solve(v,a,n);
    }
}