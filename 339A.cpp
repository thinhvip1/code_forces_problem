#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(string s){
    vector<int> v;
    // for(char c : s){
    //     if(c >= 48 && c <= 57)
    //         v.push_back(int(c-48));
    // }
    for(int i = 0; i < s.size(); i++){
        if(i%2 == 0)
            v.push_back(int(s[i]-48));
    }

    sort(v.begin(), v.end());

    for(int i = 0; i < v.size(); i++){
        cout << v[i];
        if(i != v.size()-1)
            cout << "+";
    }

}

int main(){
    string s;
    getline(cin,s);

    solve(s);

    return 0;
}