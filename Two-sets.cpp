/*
    Author: manncodes
    Time : 03 November 2022  00:38:36
    File: Two-sets.cpp
    74b14b29-afb3-413d-acd1-14636860e72b
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

#define fi first
#define se second
#define endl '\n'

using pii = pair<int, int>;
using ll = long long;
using ld = long double;

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
//mt19937 rng(0);

void solve() {
    ll n;
    cin >> n;

    if (n % 4 == 0) {
        cout << "YES" << endl;
        vector<int> a, b;
        rep(i, 1, n + 1) {
            if (i % 4 == 0 || i % 4 == 1) {
                a.push_back(i);
            }
            else {
                b.push_back(i);
            }
        }
        cout << a.size() << endl;
        for (auto x : a) {
            cout << x << " ";
        }
        cout << endl;
        cout << b.size() << endl;
        for (auto x : b) {
            cout << x << " ";
        }
        cout << endl;
    }
    else if (n % 4 == 3) {
        cout << "YES" << endl;
        vector<int> a, b;
        rep(i, 1, n + 1) {
            if (i % 4 == 1 || i % 4 == 2) {
                a.push_back(i);
            }
            else {
                b.push_back(i);
            }
        }
        cout << a.size() << endl;
        for (auto x : a) {
            cout << x << " ";
        }
        cout << endl;
        cout << b.size() << endl;
        for (auto x : b) {
            cout << x << " ";
        }
        cout << endl;
    }
    else {
        cout << "NO" << endl;
    }
}

int main() {
#ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    sync

        int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
    cerr << "processor time: " << clock() / (double)CLOCKS_PER_SEC << "s    ";
    return 0;
}