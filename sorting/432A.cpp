#include <iostream>
using namespace std;

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

int number_of_groups(int a[], int n, int k){
    // int index = 0;
    // while(index < n && a[index] <= 5-k){
    //     index++;
    // }
    // return index/3;
    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(5 - a[i] >= k)
            cnt++;
    }
    return cnt/3;
}

int main(){
    int n, k; cin >> n >> k;
    int a[n];
    for(int &x : a) cin >> x;

    // insertion_sort(a,n);

    cout << number_of_groups(a,n,k);

    return 0;
}