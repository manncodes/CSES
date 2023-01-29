/*
    Author: manncodes
    Time : 31 October 2022  11:05:48
    File: Permutations.cpp
    2bd3180f-7ae8-4632-80fb-fe2471e12d5b
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

#define push_back pb
#define emplace_back eb
#define fi first
#define se second
#define endl '\n'
 
using pii = pair<int , int>;
using ll = long long;
using ld = long double;
 
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
//mt19937 rng(0);

void solve(){
    ll n;
    cin >> n;
    // A permutation of integers 1,2,…,n is called beautiful if there are no adjacent elements whose difference is 1.

    // Given n, construct a beautiful permutation if such a permutation exists.

    if(n == 1){
        cout << 1 << endl;
        return;
    }
    if(n == 2 || n == 3){
        cout << "NO SOLUTION" << endl;
        return;
    }
    if(n == 4){
        cout << "2 4 1 3" << endl;
        return;
    }
    for(int i = 1; i <= n; i += 2){
        cout << i << " ";
    }
    for(int i = 2; i <= n; i += 2){
        cout << i << " ";
    }
    cout << endl;
}

int main(){
    #ifndef ONLINE_JUDGE 
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
 
    sync

    int t = 1;
    //cin >> t;
    while(t--){
        solve();
    }
    cerr << "processor time: " << clock() / (double) CLOCKS_PER_SEC << "s    ";
    return 0;
}