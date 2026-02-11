#include <bits/stdc++.h>
using namespace std;

int main(){ 
    int n;
    int minm = INT_MAX;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
        minm = min(minm,abs(a[i]));
    } 
    cout << minm << endl;
    return 0;
}