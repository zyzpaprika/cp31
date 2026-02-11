#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin >> v[i];
        }
        int x = 0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(gcd(v[i],v[j])<=2)x=1;
            }
        }
        if(x==1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}