#include <iostream>
using namespace std;
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void max_sum(int n){
   int cnt = 0;
   if(n % 2 == 0){
        cout << n/2 << endl;
        for(int i = 0; i < n/2; i++){
            cout << 2 << " ";
        }
   }
   else{
        cout << (n-3)/2 + 1 << endl;
        for(int i = 0; i < (n-3)/2; i++)
            cout << 2 << " ";
        cout << "3 ";
   }
}

int main(){
    IOS;
    int n; cin >> n;
    max_sum(n);
}