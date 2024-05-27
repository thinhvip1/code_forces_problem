#include <iostream>
#include <vector>
#include <sstream>
#include <map>
using namespace std;

map<string,int> fre;

vector<string> trans(string s){
    vector<string> ans;
    stringstream ss(s);
    string tmp;
    while(ss >> tmp){
        ans.push_back(tmp);
        fre[tmp]++;
    }
    return ans;
}

void solve(vector<string> v[], int n){
    int point[3];
    fill(point, point+3, 0);

    for(int i = 0; i < n; i++){
        for(int j = 0; j < 3; j++){
            if(fre[v[j][i]] == 1){
                point[j] += 3;
            }
            else if(fre[v[j][i]] == 2){
                point[j]++;
            }
        }
    }
    for(int i = 0; i < 3; i++)
        cout << point[i] << " ";
}

int main(){
    int tc; cin >> tc;
    while(tc--){
        int n; cin >> n;
        cin.ignore();
        vector<string> v[3];
        string s; 
        for(int i = 0; i < 3; i++){
            getline(cin, s);
            v[i] = trans(s);
        }
        solve(v, n);
        cout << endl;
        fre.clear();
    }
    
}