#include <iostream>
#include <vector>
using namespace std;
#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl "\n"

string solve(string s, int n){
    int l = 0, r = 9;
    string ans(10,'0'); // ans.assign(10,'0');
    for(char c : s){
        if((int)c >= 48 && (int)c <= 57){
            int leave_room = (int)c - 48;
            ans[leave_room] = '0';
        }
        else{
            if(c == 'L'){
                for(int i = 0; i < 10; i++){
                    if(ans[i] == '0'){
                        ans[i] = '1';
                        break;
                    }
                }
            }
            else{
                for(int i = 9; i >= 0; i--){
                    if(ans[i] == '0'){
                        ans[i] = '1';
                        break;
                    }
                }
            }
        }
    }
    return ans;
}

int main(){
    int n; cin >> n;
    string s; cin >> s;
    string ans = solve(s,n);
    cout << ans << endl;   

    return 0;
}