#include <iostream>
using namespace std;

string solve(string s){
    string ans = "";
    for(int i = 0; i < s.size();){
        if(s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B'){
            if(i == 0)
                i += 3;
            else if(i == s.size() - 3)
                break;
            else{
                ans = ans + " ";
                i += 3;
            }

        }
        else{
            ans = ans + s[i];
            i++;
        }
    }
    return ans;
}

int main(){
    string s; cin >> s;
    string ans = solve(s);
    cout << ans;
}
