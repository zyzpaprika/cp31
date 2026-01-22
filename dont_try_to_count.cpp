#include <bits/stdc++.h>
using namespace std;

bool check(string s2,string s1){
    if(s1.size()<s2.size())return false;
    for(int i=0;i<s1.size()-s2.size()+1;i++){
        if(s1.substr(i,s2.size())==s2)return true;
    }
    return false;
}

int count(int n, int m, string x, string s){
    string x1 = x+x;
    string x2 = x1+x1;
    string x3 = x2+x2;
    string x4 = x3+x3;
    string x5 = x4+x4;
    if(check(s,x))return 0;
    else if(check(s,x1))return 1;
    else if(check(s,x2))return 2;
    else if(check(s,x3))return 3;
    else if(check(s,x4))return 4;
    else if(check(s,x5))return 5;
    return -1;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        string x,s;
        cin >> x;
        cin >> s;
        cout << count(n,m,x,s) << endl;
    }
    return 0;
}