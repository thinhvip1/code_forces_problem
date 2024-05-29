#include <iostream>
#include <vector>
using namespace std;
#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl "\n"

void nhap(vector<int> &v, vector<int> &players, int k, int q){
    for(int i = 0; i < k ; i++){
        int x; cin >> x;
        v.push_back(x);
    }
    for(int i = 0; i < q; i++){
        int x; cin >> x;
        players.push_back(x);
    }
}

int number_players(vector<int> v, int players, int k){

    while(v[0] <= players){
        for(int i = 0; i < k; i++){
            if(v[i] <= players){
                players--;
                i++;
            }
            else
                break;
        }
    }

    return players;
}

int main(){
    int t; cin >> t;
    while(t--){
        int k, q; cin >> k >> q;
        vector<int> v, players;
        nhap(v, players, k, q);
        for(int i = 0; i < q; i++){
            int ans = number_players(v,players[i],k);
            cout << ans << " ";
        }
        cout << endl;
    }

    return 0;
}