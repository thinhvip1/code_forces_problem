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

int min_distance(int a[]){
    int ans = 0;
    ans = (a[1] - a[0]) + (a[2] - a[1]);
    return ans;
}

int main(){
    int a[3];
    for(int i = 0; i < 3; i++)
        cin >> a[i];

    insertion_sort(a, 3);

    cout << min_distance(a);

    return 0;

}