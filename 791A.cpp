#include <iostream>
using namespace std;

int years(int a, int b){
    int years = 0;
    while(a <= b){
        years++;
        a *= 3;
        b *= 2;
    }

    return years;
}

int main(){
    int a,b; cin >> a >> b;
    cout << years(a,b);
    return 0;
}