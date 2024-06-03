#include <iostream>
#include <vector>
#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define max_n 1000000
using namespace std;

bool check[max_n];

// void bruto_force(){
//     string s;
//     vector<char> ans;
//     cin >> s;
//     for(int i = 0; i < s.size(); i++){
//         if(s[i] != 'B' && s[i] != 'b')
//             ans.push_back(s[i]);
//         else if(s[i] == 'B'){
//             for(int j = ans.size()-1; j >= 0; j--){
//                 if(ans[j] >= 65 && ans[j] <= 90){
//                     ans.erase(ans.begin()+j);
//                     break;
//                 }
//             }
//         }else if(s[i] == 'b'){
//             for(int j = ans.size()-1; j >= 0; j--){
//                 if(ans[j] >= 97 && ans[j] <= 122){
//                     ans.erase(ans.begin()+j);
//                     break;
//                 }
//             }
//         }
//     }
//     for(char c : ans) cout << c;
//     cout << endl;
// }

void solve(){
    string s;
    vector<int> lowers, uppers;
    cin >> s;
    fill(check, check + s.size(), true);

    for(int i = 0; i < s.size(); i++){
        if(s[i] != 'B' && s[i] != 'b'){
            if(s[i] >= 97 && s[i] <= 122)
                lowers.push_back(i);
            else
                uppers.push_back(i);
        }else if(s[i] == 'B'){
            check[i] = false;
            if(uppers.size() != 0){
                int j = uppers.back();
                check[j] = false;
                uppers.pop_back();
            }           
        }else if(s[i] == 'b'){
            check[i] = false;
            if(lowers.size() != 0){
                int j = lowers.back();
                check[j] = false;
                lowers.pop_back();
            }
        }

    }

    for(int i = 0; i < s.size(); i++){
        if(check[i])
            cout << s[i];
    }
    cout << endl;
}

int main(){
    IOS;
    int tc; cin >> tc;
    while(tc--){
        solve();
        // bruto_force();
    }
}