#include <iostream>
using namespace std;

bool check_square(string s){
    int n = s.size();
    if(n % 2 == 1) 
        return false;
    int i = 0, j = n/2;
    while(i < n/2){
        if(s[i] != s[j])
            return false;
        i++;
        j++;
    }
    return true;
}

int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        if(check_square(s))
            cout << "YES\n";
        else 
            cout << "NO\n";
    }
}