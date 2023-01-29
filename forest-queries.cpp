/*
    Author: manncodes
    Time : 29 January 2023  12:57:04
    File: forest-queries.cpp
    93f8ef65-3fda-4399-88ab-c2709ed3940b
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
 
using vi = vector<int>;
using pii = pair<int , int>;
using ll = long long;
using ld = long double;

/*
You are given an n×n
 grid representing the map of a forest. Each square is either empty or contains a tree. The upper-left square has coordinates (1,1)
, and the lower-right square has coordinates (n,n)

Your task is to process q
queries of the form: how many trees are inside a given rectangle in the forest?
*/

const ll N = 1e3 + 5;
ll a[N][N];

void solve(){
    ll n, q;
    cin >> n >> q;
    rep(i, 1, n + 1){
        rep(j, 1, n + 1){
            char c;
            cin >> c;
            a[i][j] = (c == '*')? 1 : 0;
        }
    }
    rep(i, 1, n + 1){
        rep(j, 1, n + 1){
            a[i][j] += a[i - 1][j] + a[i][j - 1] - a[i - 1][j - 1];
            //state change explanation:
            // here a[i][j] is the number of trees in the rectangle (1,1) to (i,j)
            // a[i - 1][j] is the number of trees in the rectangle (1,1) to (i - 1, j)
            // a[i][j - 1] is the number of trees in the rectangle (1,1) to (i, j - 1)
            // a[i - 1][j - 1] is the number of trees in the rectangle (1,1) to (i - 1, j - 1)
        }
    }
    while(q--){
        ll x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        cout << a[x2][y2] - a[x1 - 1][y2] - a[x2][y1 - 1] + a[x1 - 1][y1 - 1] << endl;
    }
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