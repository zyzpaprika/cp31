#include <bits/stdc++.h>
using namespace std;

int helper(int n, string s){
    int cnt = 0, alt = 0;
    for(int i=0;i<n;i++){
        if(s[i]=='.'){
            cnt++;alt++;
            if(cnt>=3)return 2;
        }
        else{
            //alt = cnt;
            cnt = 0;
        }
    }
    return alt;
}

int main(){
    int t;
    cin >> t;
    int x;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        cout << helper(n,s) << endl;
    }
    return 0;
}