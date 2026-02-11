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
        int maxm = INT_MIN, curr = 0;
        for(int i=0;i<n;i++){
            if(v[i]==0)curr++;
            else curr = 0;
            maxm = max(maxm,curr);
        }
        cout << maxm << endl;
    }
    return 0;
}