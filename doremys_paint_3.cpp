#include <bits/stdc++.h>
using namespace std;

string doremy(int n, vector<int> v){
    map<int,int> mp;
    for(auto it:v)mp[it]++;
    if(mp.size()>=3)return "No";
    else{
        int freq1 = mp.begin()->second;
        int freq2 = mp.rbegin()->second; 
        if(freq1==freq2)return "Yes";
        else if(n%2==1 && abs(freq1-freq2)==1)return "Yes";
        else return "No";
    } 
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i=0;i<n;i++)cin >> v[i];
        cout << doremy(n,v) << endl;
    }
    return 0;
}