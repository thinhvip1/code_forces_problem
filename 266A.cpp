#include <iostream>
using namespace std;

int count(string s){
    int cnt = 0;
    char cur_color = s[0];
    for(int i = 1; i < s.size(); i++){
        if(s[i] == cur_color)
            cnt++;
        cur_color = s[i];
    }

    return cnt;

}

int main(){
    int n; cin >> n;
    string s; cin >> s;

    cout << count(s);

    return 0;
}