#include <iostream>
#include <vector>
#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl "\n"
#define max_n 200001
using namespace std;
typedef long long ll;

void merge(pair<int,int> a[], int l, int m, int r){
    vector<pair<int,int>> x(a+l, a+m+1);
    vector<pair<int,int>> y(a+m+1, a+r+1);
    int i = 0, j = 0;
    while(i < x.size() && j < y.size()){
        if(x[i].first < y[j].first){
            a[l] = x[i];
            i++;
        }else{
            a[l] = y[j];
            j++;
        }
        l++;
    }
    while(i < x.size()){
        a[l] = x[i];
        l++;
        i++;
    }
    while(j < y.size()){
        a[l] = y[j];
        l++;
        j++;
    }
}

void merge_sort(pair<int,int> a[], int l, int r){
    if(l >= r) return;
    int m = (l+r)/2;
    merge_sort(a, l, m);
    merge_sort(a, m+1, r);
    merge(a, l, m, r);
}

// ll merge_inversion(int a[], int l, int m, int r){
//     vector<int> x(a+l, a+m+1);
//     vector<int> y(a+m+1, a+r+1);
//     int i = 0, j = 0;
//     ll cnt = 0;
//     while(i < x.size() && j < y.size()){
//         if(x[i] <= y[j]){
//             a[l] = x[i];
//             i++;
//         }else{
//             cnt += (ll)x.size() - i;
//             a[l] = y[j];
//             j++;
//         }
//         l++;
//     }
//     while(i < x.size()){
//         a[l] = x[i];
//         i++;
//         l++;
//     }
//     while(j < y.size()){
//         a[l] = y[j];
//         j++;
//         l++;
//     }
//     return cnt;
// }

// ll cnt_inversion(int a[], int l, int r){
//     ll cnt = 0;
//     if(l < r){
//         int m = (l+r)/2;
//         cnt += cnt_inversion(a,l,m);
//         cnt += cnt_inversion(a,m+1,r);
//         cnt += merge_inversion(a,l,m,r);
//     }
//     return cnt;
// }

void nhap(pair<int,int> a[], int n){
    for(int i = 0; i < n; i++){
        cin >> a[i].first;
    }
    for(int i = 0; i < n; i++){
        cin >> a[i].second;
    }
}
void xuat(pair<int,int> a[], int n){
    for(int i = 0; i < n; i++){
        cout << a[i].first << " ";
    }
    cout << endl;
    for(int i = 0 ; i < n; i++){
        cout << a[i].second << " ";
    }
}
int main(){
    IOS;
    int tc; cin >> tc;
    while(tc--){
        int n; cin >> n;
        pair<int,int> a[max_n];
        nhap(a,n);
        merge_sort(a,0,n-1);

        xuat(a,n);

        cout << endl;
    }
}