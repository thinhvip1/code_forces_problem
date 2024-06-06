#include <iostream>
#include <vector>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define max_n 200000

void solve(int n){
    int max_fre = 0;
    vector<int> v[n];

    for(int i = 0; i < n; i++){
        int x; cin >> x;
        v[x].push_back(i);
        if(max_fre < x)
            max_fre = x;    
    }

    char ans[max_n];
    for(int i = 0; i <= max_fre; i++){
        char beg_c = 'a';
        for(int j = 0; j < v[i].size(); j++){
            ans[v[i][j]] = beg_c;
            beg_c++;
        }
    }

    for(int i = 0; i < n; i++){
        cout << ans[i];
    }
    cout << endl;
}   

void solve1(int n){
    int a[n];
    char ans[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int alpha[26];
    fill(alpha, alpha + 26, 0);

    for(int i = 0; i < n; i++){
        for(int j = 0; j < 26; j++){
            if(alpha[j] == a[i]){
                ans[i] = (char) (j+97);
                alpha[j]++;
                break;
            }
        }
    }
    for(int i = 0; i < n; i++)
        cout << ans[i];
    
    cout << endl;
}

int main(){
    IOS;
    int tc; cin >> tc;
    while(tc--){
        int n; cin >> n;
        // solve(n);
        solve1(n);
    }
}