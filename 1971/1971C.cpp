#include <iostream>
using namespace std;

bool check_belong(int a, int b, int x){
    if(x >= min(a,b) && x <= max(a,b))
        return true;
    else
        return false;
}

void check(int a, int b, int c, int d){
    if((check_belong(a,b,c) && !check_belong(a,b,d)) || (check_belong(a,b,d) && !check_belong(a,b,c)))
        cout << "YES\n";
    else 
        cout << "NO\n";
}

int main(){
    int tc; cin >> tc;
    while(tc--){
        int a,b,c,d; cin >> a >> b >> c >> d;
        check(a,b,c,d);
    }

}