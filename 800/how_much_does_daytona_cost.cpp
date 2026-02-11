#include <bits/stdc++.h>
using namespace std;

string indeed(int n, int k, vector<int> v){
    unordered_map<int,int> mp;
    for(auto it:v)mp[it]++;
    if(mp[k]==0)return "NO";
    else return "YES";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        vector<int> v(n);
        for(int i=0;i<n;i++)cin >> v[i];
        cout << indeed(n,k,v) << endl;
    }
    return 0;
}