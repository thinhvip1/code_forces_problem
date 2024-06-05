#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

void solve(vector<ll> x){
    ll max_val = 1;
    int i_max;
    for(int i = 0; i < 4; i++){
        int tmp; cin >> tmp;
        x.push_back(tmp);
        if(x[i] > max_val){
            i_max = i;
            max_val = x[i];
        }
    }
    x.erase(x.begin()+i_max);
    // for(int i : x) cout << i << " ";
    ll a, b, c;
    a = (x[0] + x[1] - x[2])/2;
    b = x[0] - a;
    c = max_val - a - b;
    cout << a << " " << b << " " << c;
}

int main(){
    vector<ll> x;

    solve(x);

    return 0;
}