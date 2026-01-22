#include <bits/stdc++.h>
using namespace std;

string help(int n, int k, vector<int> arr){
    vector<int> sorted = arr;
    sort(sorted.begin(),sorted.end());
    if(k>1 || sorted==arr)return "YES";
    else return "NO";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin >> n >> k;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        cout << help(n,k,arr) << endl;
    }
    return 0;
}