#include <iostream>
#include <string>
using namespace std;

string solve(string s){
    string res = "";
    char vowels[6] = {'a', 'e', 'u', 'i', 'o', 'y'};

    for(char c : s){
        int cnt = 0;
        if(c >= 65 && c <= 90)
            c += 32;
        for(int i = 0; i < 6; i++){
            if(c != vowels[i])
                cnt++;
        }
        // if(c!='a' && c!='e' && c!='u' && c!='i' && c!='o' && c!='y')

        if(cnt == 6){
            res += ".";
            res += c;
        }

    }
    
    return res;
}

int main(){
    string s; cin >> s;

    cout << solve(s);

    return 0;
}