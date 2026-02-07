#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i=0;i<n;i++)cin >> v[i];
        if(n%2==0){
            int xorr = 0;
            for(int i=0;i<n;i++) xorr ^= v[i];  
            if(xorr==0) cout << 1 << endl;
            else cout << -1 << endl;
        }
        else{
            int x = 0;
            for(int i=0;i<n;i++)x^=v[i];
            cout << x << endl;
        }
    }
    return 0;
}