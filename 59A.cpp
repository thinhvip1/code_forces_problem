#include <iostream>
using namespace std;

string change(string s){
    int lowercase_letters = 0;
    for(char c : s){
        if(c >= 97 && c <= 122)
            lowercase_letters++;
    }

    if(lowercase_letters >= s.size()-lowercase_letters){
        for(char &c : s){
            if(c >= 65 && c <= 90)
                c += 32;
        }
    }
    else   
        for(char &c : s){
            if(c >= 97 && c <= 122)
                c -= 32;
        }

    return s;
}

int main(){
    string s; cin >> s;
    cout << change(s);
    return 0;
}