#include <iostream>
using namespace std;

bool check(string berlandish, string birlandish){
    int n = berlandish.size();

    for(int i = 0; i < n; i++){
        if(berlandish[i] != birlandish[n-i-1])
            return false;
    }

    return true;
}

int main(){
    string berlandish, birlandish;
    getline(cin,berlandish);
    getline(cin,birlandish);

    if(check(berlandish,birlandish))
        cout << "YES";
    else
        cout << "NO";
}