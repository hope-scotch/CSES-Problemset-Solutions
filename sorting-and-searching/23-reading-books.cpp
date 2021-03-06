////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<bits/stdc++.h>
#define ll long long int
#define ar array
#define MOD 1000000007
#define mp make_pair
#define pb push_back
#define all(t) (t).begin(), (t).end()
#define pii pair<int, int>
#define vi vector<int>
#define vvi vector<vector<int>>
#define vpi vector<pair<int, int>>

using namespace std;

void solve();

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("error.txt", "w", stderr);
		freopen("output.txt", "w", stdout);
	#endif
	
	int n; cin >> n;
	vi v(n);
	
	ll sum = 0, mx = 0;
	
	// 2 3 8
	// 8 2 3
	// It's always most optimal for B to start with the book with the max duration
	// A has to wait for 8 - (2 + 3) = 3 minutes, which is the most optimal
	// After waiting for max - (sum - max) minutes, A reads max 
	// => Total = (sum - max) + (max - (sum - max)) + max
	// => Total = 2 * max
	// If sum > 2 * max, then waiting time would be 0
	// => Total = sum - max + max = sum
	
	for (int i = 0; i < n; i++) {
		cin >> v[i];
		sum += v[i];
		mx = max(mx, (ll)v[i]);
	}
	
	cout << max(sum, 2 * mx) << "\n";
	
	cerr << "time taken: " << (float)clock()/CLOCKS_PER_SEC << " secs" << endl;
	return 0;
}


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
