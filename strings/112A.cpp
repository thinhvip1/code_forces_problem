#include <iostream>
using namespace std;

string to_upper(string s){
    for(char &c : s)
        if(c >= 97 && c <= 122)
            c -= 32;
    return s;
}

int cmp(string s1, string s2){
    s1 = to_upper(s1);
    s2 = to_upper(s2);
    for(int i = 0; i < s1.size(); i++){
        if(s1[i] < s2[i])
            return -1;
        else if(s1[i] > s2[i])
            return 1;
    }
    return 0;
}

int main(){
    string s1, s2;
    getline(cin,s1);
    getline(cin,s2);
    cout << cmp(s1, s2);
}