#include <bits/stdc++.h>
using namespace std;

int goals(int n, vector<int> v){
    int sum = 0;
    for(auto it:v)sum+=it;
    return -sum;
} 

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n-1);
        for(int i=0;i<n-1;i++)cin >> v[i];
        cout << goals(n,v) << endl;
    }
    return 0;
}