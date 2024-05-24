#include <iostream>
#include <vector>
#include <map>
#include <sstream>
#include <cstdlib>
using namespace std;
#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl "\n"
#define max_n 201

// vector<string> adj[max_n];
map<string, vector<string>> adj;
map<string, int> heights;
string strlower(string s){
    for(char &c : s){
        if(c >= 65 && c <= 90)
            c = (char)((int)c + 32);
    }
    return s;
}

void nhap(int &n){
    cin >> n;
    cin.ignore();
    for(int i = 0; i < n; i++){
        string reposted;
        getline(cin, reposted);
        // cach 1:
        // string name1, repost, name2;
        // stringstream ss(reposted);

        // ss >> name1 >> repost >> name2;
        // name1 = strlower(name1);
        // name2 = strlower(name2);
        // adj[name2].push_back(name1);

        // cach 2:
        string name1, name2;
        int pos = reposted.find(" reposted ");
        name1 = reposted.substr(0,pos);
        name2 = reposted.substr(pos+10);
        name1 = strlower(name1);
        name2 = strlower(name2);
        adj[name2].push_back(name1);
    }
}

int height_tree(string name){
    if(adj[name].empty()){
        return 1;
    }

    for(string name_reposter : adj[name]){
        heights[name] = max(heights[name], height_tree(name_reposter) + 1);
    }

    return heights[name];
}

int main(){
    int n;

    nhap(n);

    int max_chain = height_tree("polycarp");

    cout << max_chain;
}