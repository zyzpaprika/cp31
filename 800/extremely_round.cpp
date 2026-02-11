#include <bits/stdc++.h>
using namespace std;

bool check(long long x){
    long long digits = 0;
    long long zeroes = 0;
    while(x){
        if(x%10==0)zeroes++;
        digits++;
        x/=10;
    }
    return zeroes == digits-1;
}

int main(){
    vector<long long> round;
    for(long long i = 1;i<=999999;i++){
        if(check(i)==true)round.push_back(i);
    }
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        long long ans = 0;
        for(int i=0;i<round.size();i++){
            if(round[i]<=n)ans++;
            else break;
        }
        cout << ans << endl;
    }
    return 0;
}