// siddharth ruria
// linkedin: https://www.linkedin.com/in/ruria-siddharth/

// #pragma GCC optimize("O3,unroll-loops")

#include <iostream>
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace chrono;
using namespace __gnu_pbds;

// fast i/o
#define fast ios_base::sync_with_stdio(false);
#define input cin.tie(NULL);
#define output cout.tie(NULL);

// aliases
using ll= long long;
using lld= long double;
using ull= unsigned long long;

// constants
const lld PI= 3.141592653589793238;
const ll INF= LONG_LONG_MAX;
const ll MOD= 1e9+7;

// typedefs
typedef vector<int> vi;
typedef vector<pair<int, int>> vpi;
typedef pair<ll, ll> pll;
typedef vector<ll> vll;
typedef vector<pll> vpll;
typedef vector<string> vs;
typedef unordered_map<ll,ll> umll;
typedef map<ll,ll> mll;
typedef tree<pair<ll, ll>, null_type, less<pair<ll, ll>>, rb_tree_tag, tree_order_statistics_node_update> pbds; // find_by_order, order_of_key

// macros
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define nline "\n"
#define all(v) v.begin(),v.end()

// operator overloads
template<typename T> // cin >> vector<T>
istream& operator >>(istream &istream, vector<T> &v){ for(auto &it: v) cin >> it; return istream; }
template<typename T> // cout << vector<T>
ostream& operator <<(ostream &ostream, const vector<T> &c) { for(auto &it: c) cout << it << " "; return ostream; }

// mathematical functions
ll moduloMultiplication(ll a,ll b,ll mod){ ll res= 0; a%= mod; while(b) { if(b&1) res= (res+a)%mod; b>>= 1; } return res; }
ll moduloPower(ll x, ll y, ll p){ ll res= 1; x= x%p; if (x== 0) return 0; while (y> 0){ if(y&1) res= (res*x)%p; y = y>> 1; x= (x*x)%p; } return res; }

// checks
bool isPrime(ll n){ if(n<= 1) return false; if(n<= 3) return true; if(n%2== 0 || n%3== 0) return false; for(int i= 5; i*i<= n; i= i+6) if(n%i ==0 || n%(i+2)== 0) return false; return true; }
bool isPowerOfTwo(ll n){ if(n== 0) return false; return (ceil(log2(n))== floor(log2(n))); }
bool isPerfectSquare(ll x){ if(x>= 0) {ll sr= sqrt(x); return (sr*sr== x); } return false; }

#define siddharth 1

// debug
#ifdef siddharth 
#define debug(x) cerr << #x << " " << x << " " << nline;
#else
#define debug(x);
#endif

// code
void solve() {
}

// main function
int main() {	

	fast	
	input 
	output

	auto start= high_resolution_clock::now();

	int tt= 1;
	// cin >> tt;
	while(tt--) {
		solve();
	}
	
	auto stop= high_resolution_clock::now();
	auto duration= duration_cast<microseconds>(stop-start);

    #ifdef siddharth
	cerr << "time: " << duration.count()/1000 << endl;
	#endif

}
// end
