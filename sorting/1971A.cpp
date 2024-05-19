#include <iostream>
using namespace std;

int main(){
    int tc; cin >> tc;
    while(tc--){
        int x, y; cin >> x >> y;
        if(x < y) cout << x << " " << y << endl;
        else cout << y << " " << x << endl;
    }
}