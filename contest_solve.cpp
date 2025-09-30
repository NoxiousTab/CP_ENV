/*
	Dont think observe test cases
	Think recursion
	Think binary search
	Think Greedy
	Think Hashmap
	Think DP
	Think PSum
*/
#include <bits/stdc++.h>
#define loop(i, a, b) for(int i=int(a); i<= int(b); i++) // loop variable i from a to b
#define ll long long
#define ull unsigned long long int
#define MAX INT_MAX
#define MIN INT_MIN
#define LMAX LONG_MAX
#define LMIN LONG_MIN
#define rep(i, n) for(int i=0;i<int(n);i++)
#define yes Yeah()
#define no Nah()
#define newline cout<<"\n"
using namespace std;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef long double lld;
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif
template <typename T>
void _print(T &x) {
	cerr<<x;
}
template <typename T>
void _print(vector<T> &arr) {
	cerr<<"[ ";
	for(int i = 0; i < arr.size(); i++) {
		if(i != arr.size()-1) {
			cerr<<arr[i]<<", ";
		} else {
			cerr<<arr[i];
		}
	}
	cerr<<" ]";
}

void Yeah() {
	cout<<"YES\n";
}
void Nah() {
	cout<<"NO\n";
}
ll binpow(ll a, ll b);
ll binpow(ll a, ll b, ll m);
int gcd(int v,int b) {
	if(v==0) return b;
	if(b==0) return v;
	if(v>b) return gcd(b,v);
	if(v==b) return b;
	if(b%v==0) return v;
	return gcd(v,b%v);
}


ll binpow(ll a, ll b) {
	ll res = 1;
	while (b > 0) {
		if (b & 1)
			res = res * a;
		a = a * a;
		b >>= 1;
	}
	return res;
}

ll binpow(long long a, long long b, long long m) {
	a %= m;
	long long res = 1;
	while (b > 0) {
		if (b & 1)
			res = res * a % m;
		a = a * a % m;
		b >>= 1;
	}
	return res;
}

bool is_prime(int n) {
	if (n == 1) {
		return false;
	}
	int i = 2;
	while (i*i <= n) {
		if (n % i == 0) {
			return false;
		}
		i += 1;
	}
	return true;
}

vector<ll> prefix_sum(vector<int> &arr) {
	int n = arr.size();
	ll currsum = 0ll;
	vector<ll> ans(n);
	rep(i, n) {
		currsum+=arr[i];
		ans[i] = currsum;
	}
	return ans;
}

bool isSorted(vector<int> arr) {
	for(int i = 0; i < arr.size() - 1; i++) {
		if(arr[i + 1] < arr[i]) {
			return false;
		}
	}
	return true;
}


bool isSorted(vector<int> arr, int from, int to) {
	for(int i=from; i<to; i++) {
		if(arr[i+1] < arr[i]) {
			return false;
		}
	}
	return true;
}
/*
static int sumofarr(int arr[], int n){
	int sum = 0;
	for(int i=0;i<n;i++){
		sum+=arr[i];
	}
	return sum;
}*/

//typedef vector<int, int>			vii;
void solve();

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t = 1;
	/*is Single Test case?*/cin >> t;
	int cas=1;
	while (t--) {
		//cout << "Case #"<<cas<<": ";
		solve();
		cas++;

	}
	//solve();

	cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
	return 0;
}


/*static int64_t helper(int64_t a, int64_t b, int64_t c){
	if(r == 0)return abs(a-b);



}*/
struct hashFunction
{
	inline std::size_t operator()(const std::pair<int,int> & v) const {
		return v.first*31+v.second;
	}
};


void solve() {
    
    
}
