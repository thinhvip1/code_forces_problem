#include <iostream>
using namespace std;

int min_capacity(int a[][2], int n){

    int res = 0, cur_capacity = 0;

    for(int i = 0; i < n; i++){
        cur_capacity = cur_capacity - a[i][0] + a[i][1];
        if(res < cur_capacity) res = cur_capacity;
    }

    return res;

}

int main(){
    int n; cin >> n;
    int a[n][2];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 2; j++)
            cin >> a[i][j];
    }
    
    cout << min_capacity(a,n);

    return 0;
}