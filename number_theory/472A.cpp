#include <iostream>
#include <cmath>
using namespace std;

bool prime[10001];

void sieve_of_thenes(){
    fill(prime, prime+10001,true);
    prime[0] = prime[1] = false;
    for(int i = 2; i < 10001; i++){
        if(prime[i] == true)
            for(int j = i*i; j < sqrt(10001); j+= i){
                prime[j] = false;
            }
    }
}

bool isPrime(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0)
            return false;
    }
    return n > 1;
}

int main(){
    // sieve_of_thenes();

    int n; cin >> n;

    for(int i = 4; i <= n/2; i++){
        // if(prime[i] == false && prime[n-i] == false){
        //     cout << i << " " << n-i;
        //     break;
        // }
        if(isPrime(i) == false && isPrime(n-i) == false){
            cout << i << " " << n-i;
            break;
        }
    }

    return 0;
}