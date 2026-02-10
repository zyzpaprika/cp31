#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i=0;i<n;i++)cin >> v[i];
        int cnt2 = 0;
        for(auto it:v)if(it==2)cnt2++;
        if(cnt2%2!=0) cout << -1 << endl;
        int cnt = 0;
        for(int i=0;i<n;i++){
            if(v[i]==2){
                cnt++;
            }
            if(cnt==cnt2-cnt){
                cout << i+1 << endl;
                break; 
            }
        }
    }
    return 0;
}