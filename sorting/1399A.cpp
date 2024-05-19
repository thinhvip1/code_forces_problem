#include <iostream>
using namespace std;

void insertion_sort(int a[], int n){
    for(int i = 1; i < n; i++){
        int tmp = a[i], j = i - 1;
        while(tmp < a[j] && j >= 0){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = tmp;
    }
}

bool check(int a[], int n){
    for(int i = 1; i < n; i++){
        if(a[i] - a[i-1] > 1)
            return false;
    }
    return true;
}

int main(){
    int tc; cin >> tc;
    while(tc--){
        int n; cin >> n;
        int a[n];
        for(int &x : a)
            cin >> x;
        
        insertion_sort(a,n);
        if(check(a,n))
            cout << "YES\n";
        else 
            cout << "NO\n";
    }

    return 0;
}