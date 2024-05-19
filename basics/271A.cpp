#include <iostream>
using namespace std;

bool check(int year){
    bool digits[10];
    fill(digits, digits+10, false);
    while(year){
        int r = year%10;
        if(digits[r] == true)
            return false;
        else  
            digits[r] = true;
        year /= 10;
    }
    return true;
}

int distinct_digits(int year){
    do{
        year++;
    }while(check(year) == false);
    
    return year;
}

int main(){
    int year; cin >> year;
    cout << distinct_digits(year);
}