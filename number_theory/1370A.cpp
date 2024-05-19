#include <iostream>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

int main(){
    IOS;
    int tc; cin >> tc;
    while(tc--){
        int n; cin >> n;
        if(n < 2) cout << "1\n";
        else cout << n/2 << endl;
    }
}