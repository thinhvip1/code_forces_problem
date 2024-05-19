#include <iostream>
using namespace std;

int min_steps(int x){
    int cnt = 0;
    do{
        cnt++;
        x -= x >= 5 ? 5 : x;
    }while(x > 0);
    
    return cnt;
}

int main(){

    int x; cin >> x;

    cout << min_steps(x);

    return 0;

}