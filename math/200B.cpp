#include <iostream>
#include <vector>
#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

double percent_orange(vector<int> v, int n){
    double ans = 0;
    for(int i = 0; i < n; i++){
        ans += (v[i]*1.0);
    }
    return ans/n;
}

int main(){
    IOS;
    int n; cin >> n;
    vector<int> v(n);
    double ans;

    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    ans = percent_orange(v,n);

    cout << ans;
}