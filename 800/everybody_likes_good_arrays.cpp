#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i=0;i<n;i++)cin>>v[i];
        int prev = 0, curr = 0, cnt = 0;
        for(int i=0;i<n-1;i++){
            if(v[i]%2==0)prev = 0;
            if(v[i]%2!=0)prev = 1;
            if(v[i+1]%2==0)curr = 0;
            else if(v[i+1]%2!=0)curr = 1;
            if(prev==curr)cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}