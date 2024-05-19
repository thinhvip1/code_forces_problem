#include <iostream>
using namespace std;

bool check(int a[][3], int n){
    for(int j = 0; j < 3; j++){
        int sum = 0;

        for(int i = 0; i < n; i++){
            sum += a[i][j];
        }

        if(sum != 0)
            return false;
    }
    return true;
}

int main(){
    int n; cin >> n;
    int a[n][3];

    for(int i = 0; i < n; i++)
        for(int j = 0; j < 3; j++)
            cin >> a[i][j];
        

    if(check(a,n))
        cout << "YES";
    else 
        cout << "NO";
}