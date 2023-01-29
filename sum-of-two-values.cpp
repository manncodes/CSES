/*
    Author: manncodes
    Time : 08 January 2023  18:42:08
    File: sum-of-two-values.cpp
    bdab3c4f-0967-43d4-bc0d-b70444c24ce7
"*/
#include "bits/stdc++.h"
#include "ext/pb_ds/assoc_container.hpp"
#include "ext/pb_ds/tree_policy.hpp"
using namespace std;

using namespace __gnu_pbds;
template <typename T> using oset = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
// find_by_order(k) -> iterator of kth element (in sorted fashion : low - high)
// order_of_key(x) -> #numbers strictly less than x

#pragma GCC optimize("Ofast","unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#pragma GCC target("avx2")

#define sync ios_base::sync_with_stdio(0); cin.tie(0);
#define all(x) x.begin(),x.end()
#define unq(a) sort(all(a));a.resize(unique(all(a)) - a.begin())
#define rep(i,a,n) for (int i=a;i<n;i++)
#define per(i,a,n) for (int i=n-1;i>=a;i--) 
#define all(x) x.begin(),x.end()
#define sz(x) (int)(x).size()

#define endl '\n'
 
using pii = pair<int , int>;
using ll = long long;
using ld = long double;
 
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
//mt19937 rng(0);

void solve(){
    ll n, S;
    cin >> n >> S;
    vector<pair<ll,ll>> a(n);
    rep(i,0,n) cin >> a[i].first, a[i].second = i+1;
    sort(all(a));
    ll i = 0, j = n - 1;
    while(i < j){
        if(a[i].first + a[j].first == S){
            cout << a[i].second << " " << a[j].second << endl;
            return;
        }
        if(a[i].first + a[j].first < S) i++;
        else j--;

    }
    cout << "IMPOSSIBLE" << endl;
}

int main(){
   #ifndef ONLINE_JUDGE 
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
   #endif
 
    sync

    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
    cerr << "processor time: " << clock() / (double) CLOCKS_PER_SEC << "s    ";
    return 0;
}