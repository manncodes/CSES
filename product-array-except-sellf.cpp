#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n); // optimisation for latter : use array instead of vector i.e reduce memory by 2x
    
    long long global_product = 1;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        global_product *= a[i];
    }

    // if we want to store an answer somewhere we can get extra O(N) memory for it or else just cout/print it out
    vector<long long> ans(n); // optimisation for latter : use array instead of vector i.e reduce memory by 2x
    for(int i = 0; i < n; i++){
        ans[i] = global_product / a[i];
    }
    
    for(int i = 0; i < n; i++){
        cout << ans[i] << " ";
    }
}



int main(){
    int  t; 
    cin >> t;
    while(t--){
        solve();
    }
}