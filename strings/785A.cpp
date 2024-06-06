#include <iostream>
#include <vector>
#include <string>
using namespace std;

int cnt_faces(int n){
    int cnt = 0;
    vector<string> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    for(int i = 0; i < n; i++){
        if(v[i] == "Tetrahedron")
            cnt += 4;
        else if(v[i] == "Cube") 
            cnt += 6;
        else if(v[i] == "Octahedron")
            cnt += 8;
        else if(v[i] == "Dodecahedron")
            cnt += 12;
        else
            cnt += 20;
    }

    return cnt;
}

int main(){
    int n; cin >> n;
    int ans = cnt_faces(n);
    cout << ans;
}