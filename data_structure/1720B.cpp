#include <iostream>
#include <vector>
#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl "\n"
#define max_n 1000000001
using namespace std;

void nhap(vector<int> &v, int &n){
    cin >> n;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        v.push_back(x);
    }
}

void insertion_sort(vector<int> &v, int n){
    for(int i = 1; i < n; i++){
        int tmp = v[i], j = i-1;
        while(j >= 0 && tmp < v[j]){
            v[j+1] = v[j];
            j--;
        }
        v[j+1] = tmp;
    }
}

void selection_sort(vector<int> &v, int n){
    for(int i = 0; i < n-1; i++){
        int m = i;
        for(int j = i+1; j < n; j++){
            if(v[j] < v[m])
                m = j;
        }
        if(i != m)
            swap(v[i], v[m]);
    }
}

int solve(vector<int> v, int n){
    // insertion_sort(v, n);
    // int ans = v[n-1] + v[n-2] - v[0] - v[1];

    int min1 = max_n, min2 = max_n, max1 = 0, max2 = 0;
    for(int i = 0; i < n; i++){
        if(min1 > v[i]){
            min2 = min1;
            min1 = v[i];
        }
        else if(min2 > v[i])
            min2 = v[i];
        
        if(max1 < v[i]){
            max2 = max1; 
            max1 = v[i];
        }
        else if(max2 < v[i])
            max2 = v[i];
    }
    int ans = max1 + max2 - min1 - min2;
    return ans;    
}

int main(){
    IOS;
    int tc; cin >> tc;
    while(tc--){
        int n;
        vector<int> v;
        nhap(v, n);
        int ans = solve(v, n);
        cout << ans << endl;
    }
}