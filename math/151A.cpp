#include <iostream>
using namespace std;

int soft_drinks(int n, int k, int l, int c, int d, int p, int nl, int np){
    int sum_ml = k*l,
    sum_slices = c*d;

    int ans;
    ans = min(sum_ml/nl,min(sum_slices,p/np));

    return ans/n;

}

int main(){
    int n,k,l,c,d,p,nl,np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int ans = soft_drinks(n,k,l,c,d,p,nl,np);
    cout << ans;
}