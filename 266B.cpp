#include <iostream>
using namespace std;

string queue_bg(string s, int t){
    while(t--){
        for(int i = 1; i < s.size(); i++){
            if(s[i-1] == 'B' && s[i] == 'G'){
                swap(s[i-1],s[i]);
                i++;
            }
        }
    }
    return s;
}

int main(){
    int n, t;
    cin >> n >> t;
    cin.ignore();
    string s; 
    getline(cin, s);
    

    cout << queue_bg(s,t);
    return 0;
}