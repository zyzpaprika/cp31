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
        sort(v.begin(),v.end());
        int minm = v[0], maxm = v[n-1];
        if(maxm==minm) cout << "NO" << endl;
        else{
            cout << "YES" << endl;
            cout << maxm << " ";
            for(int i=0;i<n-1;i++){
                cout << v[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}