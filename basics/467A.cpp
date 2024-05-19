#include <iostream>
using namespace std;

int count_room(int a[][2], int n){
    int cnt_rooms = 0;
    for(int i = 0; i < n; i++){
        if(a[i][1] - a[i][0] >= 2)
            cnt_rooms++;
    }
    return cnt_rooms;
}

int main(){
    int n; cin >> n;
    int a[n][2];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 2; j++)
            cin >> a[i][j];
    }

    cout << count_room(a,n);
    return 0;
}