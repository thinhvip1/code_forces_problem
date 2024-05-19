#include <iostream>
using namespace std;

bool check(string guest, string host, string letter){
    int alphas[26];
    fill(alphas, alphas+26, 0);

    guest = guest + host;
    for(char c : guest){
        alphas[(int)c-65]++;
    }

    for(char c : letter){
        alphas[(int)c-65]--;
    }
    
    for(int x : alphas){
        if(x != 0)
            return false;
    }
    return true;
}

int main(){
    string guest, host, letter;
    getline(cin, guest);
    getline(cin, host);
    getline(cin, letter);

    if(check(guest, host, letter))
        cout << "YES";
    else
        cout << "NO";

    return 0;
}