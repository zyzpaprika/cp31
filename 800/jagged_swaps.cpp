#include <bits/stdc++.h>
using namespace std;

string helper(int n, vector<int> v){
    if(v[0]==1)return "YES";
    return "NO";
} 

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i=0;i<n;i++)cin >> v[i];
        cout << helper(n,v) << endl;
    }
    return 0;
}