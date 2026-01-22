#include <bits/stdc++.h>
using namespace std;

string vanya(int n){
    // vova
    if(n%3==0)return "Second";
    // vanya
    return "First";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << vanya(n) << endl;
    }
    return 0;
}