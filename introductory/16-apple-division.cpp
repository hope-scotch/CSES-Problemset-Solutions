////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
#define mp make_pair
#define pb push_back
#define all(t) (t).begin(), (t).end()
#define pii pair<int, int>
#define vi vector<int>
#define vvi vector<vector<int>>
#define vpi vector<pair<int, int>>

using namespace std;

void solve(vi& v, ll sum, ll temp, int n, ll& res) {
	if (n == 1) {
		temp += v[0];
		res = min(abs(sum - 2 * temp), res);
		return;
	}

	solve(v, sum, temp + v[n - 1], n - 1, res);
	solve(v, sum, temp, n - 1, res);
}

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
	
	ll sum = 0, res = INT_MAX;
	
	for (int i = 0; i < n; i++) {
		cin >> v[i];
		sum += v[i];
	}
	
	solve(v, sum, 0, n, res);
	
	cout << res << "\n";
	// sort(all(v));
	
	// while (n --) {
		// cout << v[n] << " ";
		// if (sum1 <= sum2)
			// sum1 += v[n];
		// else
			// sum2 += v[n];
	// }
	
	// cout << abs(sum1 - sum2) << "\n";
	
	cerr << "time taken: " << (float)clock()/CLOCKS_PER_SEC << " secs" << endl;
	return 0;
}


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
