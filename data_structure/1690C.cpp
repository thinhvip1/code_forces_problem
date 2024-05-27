#include <iostream>
#include <vector>
using namespace std;
#define IOS ios_bass::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl "\n"
#define max_n 200001

// typedef struct Node{
//     pair<int,int> time;
//     struct Node* next;
// }Node;
// typedef Node* queue;

// queue init_node(int s, int f){
//     queue tmp = new Node();
//     tmp->time.first = s;
//     tmp->time.second = f;
//     tmp->next = nullptr;
//     return tmp;
// }
// bool empty(queue q){
//     if(q == nullptr)
//         return true;
//     return false;
// }
// void push(queue &q, int s, int f){
//     queue new_node = init_node(s,f);
//     if(empty(q)){
//         q = new_node;
//         return;
//     }
//     queue tmp = q;
//     while(tmp->next != nullptr){
//         tmp = tmp->next;
//     }
//     tmp->next = new_node;

// }
// void pop(queue &q){
//     if(empty(q))
//         return;
//     Node *tmp = q;
//     q = q->next;
//     delete tmp;
// }
// pair<int,int> front(queue q){
//     return q->time;
// }

void solve(vector<int> v[], int n){

    int cur_time = v[0][0];
    for(int i = 0; i < n; i++){
        if(v[0][i] >= cur_time){
            cout << v[1][i] - v[0][i] << " ";
        }
        else
            cout << v[1][i] - cur_time << " ";
        
        cur_time = v[1][i];
    }
}

int main(){
    int tc; cin >> tc;
    while(tc--){
        int n; cin >> n;
        vector<int> v[2];
        for(int i = 0; i < 2; i++){
            for(int j = 0; j < n; j++){
                int x; cin >> x;
                v[i].push_back(x);
            }
        }
        solve(v,n);
        cout << endl;
    }
}