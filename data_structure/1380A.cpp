#include <iostream>
#include <vector>
using namespace std;
#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl "\n"
#define max_n 1001

void solve(int n){
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    int i = 0, k = n-1;
    if(i < k - 1)
        while(v[i] > v[i+1])
            i++;
    if(i < k - 1)
        while(v[k] > v[k-1])
            k--;
    
    if(i < k - 1){
        int j = i + 1;
        while(j < k){
            if(v[i] < v[j] && v[j] > v[k]){
                cout << "YES" << endl;
                cout << i + 1 << " " << j + 1 << " " << k + 1 << endl;
                return;
            }
            j++;
        }
    }
    
    cout << "NO" << endl;

}

// brute force
// void solve1(int n){
//     vector<int> v(n);
//     for(int i = 0; i < n; i++){
//         cin >> v[i];
//     }
//     for(int i = 0; i < n-2; i++){
//         for(int j = i + 1; j < n-1; j++){
//             if(v[i] < v[j]){
//                 for(int k = j + 1; k < n; k++){
//                     if(v[j] > v[k]){
//                         cout << "YES" << endl;
//                         cout << i+1 << " " << j+1 << " " << k+1 << " " << endl;
//                         return;
//                     }
//                 }
//             }
//         }
//     }
//     cout << "NO" << endl;
// }

int main(){
    IOS;
    int tc; cin >> tc;
    while(tc--){
        int n; 
        cin >> n;

        solve(n);
    }

    return 0;
}