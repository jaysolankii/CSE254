
#include <bits/stdc++.h>
using namespace std;

long long max_subsequence(int i, long long &ans, vector<long long> &a){
    if(i == 0){
        ans = max(ans, a[0]);
        return a[0];
    }
    long long pans = max_subsequence(i-1, ans, a), cans = max(0ll, pans)+a[i];
    ans = max(ans, cans);
    return cans;
}

int main(){
   
    int t; cin >> t;  //10, -20, 3, 4, 5, -1, -1, 12, -3, 1

    while(t--){
        int n; cin >> n;
        vector<long long> a(n);
        for(int i=0; i<n; i++)
            cin >> a[i];
        long long ans = LLONG_MIN;
        max_subsequence(n-1, ans, a);
        cout << ans << endl;
    }
}