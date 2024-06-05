#include <iostream>
using namespace std;

void count_days(int red, int blue){
    int suitable_fashion, unsuitable_fashion;
    if(red == blue){
        suitable_fashion = red;
        unsuitable_fashion = 0;
    }
    else if(red < blue){
        swap(blue, red);
    }

    suitable_fashion = blue;
    unsuitable_fashion = (red-blue)/2;
    cout << suitable_fashion << " " << unsuitable_fashion;
}

int main(){
    int red, blue; cin >> red >> blue;
    count_days(red,blue);
}