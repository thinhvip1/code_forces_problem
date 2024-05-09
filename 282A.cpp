#include <iostream>
#include <sstream>

using namespace std;

int bitland(string s){

    if(s[0] == s[1] && s[0] == '+' || s[1] == s[2] && s[1] == '+')
        return 1;
    else if(s[0] == s[1] && s[0] == '-' || s[1] == s[2] && s[1] == '-')
        return -1;

}

int main(){
    int tc; cin >> tc;
    int res = 0;

    while(tc--){
        string s; cin >> s;
        res += bitland(s);
    }

    cout << res; 

}