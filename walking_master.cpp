#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        // whenever it goes beyond the destination's y co-ord cout -1
        if(d<b){
            cout << -1 << endl;
            continue;
        }
        int x = d-b;
        a+=x;
        if(a<c){
            cout << -1 << endl;
            continue;
        }
        x+=(a-c);
        cout << x << endl;
    }
    return 0;
}