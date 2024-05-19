#include <iostream>
using namespace std;


int main(){
    int n; cin >> n;
    int a[3];
    int ans = 0;
    while(n--){
        int sum = 0;
        for(int x : a){
            cin >> x;
            if(x == 1)
                sum++;
        }
        if (sum > 1) 
            ans++;
    }    
    cout << ans;
}