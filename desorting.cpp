#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i=0;i<n;i++)cin >> v[i];
        // if already sorted then 0
        // find minm diff and minus 2 each time
        int mind = INT_MAX;
        for(int i=0;i<n-1;i++)mind = min(mind,v[i+1]-v[i]);
        if(mind < 0)cout << 0 << endl;
        else cout << mind/2 + 1 << endl;
    }
    return 0;
}