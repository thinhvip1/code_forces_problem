#include <iostream>
#include <algorithm>
using namespace std;
#define max_n 300001
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int a[max_n];
int query[max_n];

void input(int &n, int &q){
    cin >> n >> q;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < q; i++){
        cin >> query[i];
    }
}

int search_card(int n, int x){
    for(int i = 0; i < n; i++){
        if(a[i] == x)
            return i;
    }
}

void change_cardDeck(int index){
    int top = a[index];
    while(index > 0){
        a[index] = a[index - 1];
        index--;
    }
    a[0] = top;
}

int main(){
    int n,q;
    
    IOS;

    input(n,q);

    for(int i = 0; i < q; i++){
        int index = search_card(n,query[i]);
        cout << index+1 << " ";
        // change_cardDeck(index);
        rotate(a, a+index, a+index+1);
    }
}