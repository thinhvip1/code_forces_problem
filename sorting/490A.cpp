#include <iostream>
#include <vector>
using namespace std;

void nhap(int a[], int &n){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
}
void insertion_sort(int a[], int n){
    for(int i = 1; i < n; i++){
        int tmp = a[i], j = i-1;
        while(j >= 0 && tmp < a[j]){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = a[j];
    }
}   

void solve(int a[], int n){
    int teams;

    vector<pair<int,int>> v[3];
    for(int i = 0; i < n; i++){
        if(a[i] == 1) v[0].push_back({1, i+1}); // {value, index}
        else if(a[i] == 2) v[1].push_back({2, i+1});
        else v[2].push_back({3, i+1});
    }

    teams = min(min(v[0].size(), v[1].size()), v[2].size());

    cout << teams << endl;
    for(int i = 0; i < teams; i++){
        cout << v[0][i].second << " " << v[1][i].second << " " << v[2][i].second << endl;
    }
    
}

int main(){
    int n;
    int a[5000];

    nhap(a,n);

    // insertion_sort(a, n);

    solve(a, n);

    return 0;
}