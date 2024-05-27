#include <iostream>
using namespace std;
#define max_n 200001

void nhap(int a[], int &n){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
}

void insertion_sort(int a[], int n){
    for(int i = 1; i < n; i++){
        int tmp = a[i], j = i-1;
        while(j >= 0 && tmp < a[j]){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = tmp;
    }
}
void solve(int a[], int n){
    int max1 = 0, max2 = 0;
    for(int i = 0; i < n; i++){
        if(max1 <= a[i]){
            max2 = max1;
            max1 = a[i];
        }
        else if(max2 < a[i])
            max2 = a[i];
    }
    for(int i = 0; i < n; i++){
        if(a[i] < max1)
            cout << a[i] - max1 << " ";
        else if(a[i] == max1)
            cout << a[i] - max2 << " ";
    }
}
void solve2(int a[], int n){
    int b[max_n];
    for(int i = 0; i < n; i++)
        b[i] = a[i];
    insertion_sort(b, n);
    int max1 = b[n-1], max2 = b[n-2];
    for(int i = 0; i < n; i++){
        if(a[i] < max1)
            cout << a[i] - max1 << " ";
        else if(a[i] == max1)
            cout << a[i] - max2 << " ";
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        int n, a[max_n];
        nhap(a,n);
        solve(a,n);
        // solve2(a,n);
        cout << endl;
    }
}