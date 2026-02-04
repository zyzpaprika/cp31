#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b,c;
        cin >> a >> b >> c;
        // anna gets 1 more if c is odd
        if(c%2!=0){
            if(a+1>b)cout << "First" << endl;
            else cout << "Second"<< endl;
        }
        else{
            if(a>b)cout << "First"<< endl;
            else cout << "Second"<< endl;
        }
    }
    return 0;
}