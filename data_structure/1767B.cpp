#include <iostream>
#include <map>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl "\n"
#define max_n 200001
#define max_value 1000000000

void nhap(vector<int> &v, int &n){
    cin >> n;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        v.push_back(x);
    }
}
void bubble_sort(vector<int> &v, int n){
    for(int i = n-1; i >= 0; i--){
        for(int j = 1; j < i; j++){
            if(v[j] > v[j+1])
                swap(v[j], v[j+1]);
        }
    }
}
int max_blocks(vector<int> v, int n){
    // bubble_sort(v,n);
    // map<int,int> mp;
    // for(int i = 1; i < n; i++){
    //     mp[v[i]]++;
    // }

    // for(auto it : mp){
    //     if(it.first > v[0]){
    //         v[0] += (it.first - v[0] + 1) / 2;
    //     }
    // }

    sort(v.begin()+1, v.end());
    for(int i = 1; i < n; i++){
        if(v[i] > v[0])
            v[0] += (v[i] - v[0] + 1)/2;
    }
    return v[0];
}
int main(){
    int tc; cin >> tc;
    while(tc--){
        int n;
        vector<int> v;
        nhap(v,n);
        int ans = max_blocks(v,n);
        cout << ans << endl;
    }
    return 0;
}