#include <bits/stdc++.h>

#define endl '\n'
#define ll long long
#define lli long long int
#define ld long double
#define fore(i,a,b) for (int i = a; i < b; i++)
#define forr(i,a,b) for (int i = a; i > b; i--)
#define forn(i,n) for (int i = 0; i < n; i++)
#define fi first
#define se second
#define pb push_back
#define all(v) v.begin(), v.end()
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

typedef pair<ll, ll> pll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vll> vvll;
typedef vector<vi> vvi;
typedef vector<pii> vpii;
typedef vector<pll> vpll;
typedef map<int, int> mii;

void solve(){
    vll vectR,vectB;
    int n; cin>>n;
    forn(i,n){
        int element; cin>>element;
        vectR.pb(element);
    }
    forn(i,n){
        int element; cin>>element;
        vectB.pb(element);
    }

    sort(all(vectR));
    sort(all(vectB));
    ll max_ = -1,min_ = 1e18,t=0;

    forn(i,n){
        t=vectR[i]+vectB[n-i-1];
        max_=max(t,max_);
        min_=min(t,min_);
    }

    cout<<max_-min_;
}

int main() {
    fast_io
    solve();
}