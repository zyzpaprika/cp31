#include <bits/stdc++.h>
using namespace std;

int helper(int n, int x, vector<int> v){
    // minm value starts from 1
    if(n==0)return 0;
    int maxd = v[0];
    for(int i=1;i<n;i++){
        maxd = max(maxd,v[i]-v[i-1]);
    }
    maxd = max(maxd,2*(x-v[n-1]));
    return maxd;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,x;
        cin >> n >> x;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin >> v[i];
        }
        cout << helper(n,x,v) << endl;
    }
    return 0;
}