#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        int neg = 0;
        for(int i=0;i<n;i++){
            cin >> v[i];
            if(v[i]==-1)neg++;
        }
        int pos = v.size()-neg;
        // good conditions
        // neg cnt should be div by 2
        // neg cnt <= pos 
        int cnt = 0;
        while(pos<neg || neg%2!=0){
            pos++;
            neg--;
            cnt++;
        }
        cout << cnt << endl;    
    }
    return 0;
}