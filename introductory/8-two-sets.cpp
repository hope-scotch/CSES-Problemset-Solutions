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
#define vb vector<bool>
#define vvb vector<vector<bool>>

using namespace std;

// vi res;
// bool ok = false;

// void solve(ll sum, vb& chosen, int n) {
	// if (sum == 0) {
		// for (int i = 1; i <= n; i++)
			// if (chosen[i])
				// res.pb(i);
			
		// ok = true;
		// return;
	// }
	
	// for (int i = 1; i <= n; i++) {
		// if (chosen[i]) continue;
		// chosen[i] = true;
		// solve(sum - i, chosen, n);
		
		// if (ok) return;
		// chosen[i] = false;
	// }
// }

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("error.txt", "w", stderr);
		freopen("output.txt", "w", stdout);
	#endif
	
	int n; cin >> n;
	ll sum = (n * (n + 1)) / 2;
	
	if (sum % 2) { cout << "NO\n"; return 0; }
	
	// sum /= 2;
	
	// vb chosen(n + 1, false);
	// ok = false;
	
	// solve(sum, chosen, n);
	
	/******* BEAUTIFUL ********/
	
	vi a, b;
	bool f = true;
	while (n) {
		if (f) {
			a.pb(n --);
			if (n == 0) break;
			b.pb(n --);
			f = false;
		} else {
			b.pb(n --);
			if (n == 0) break;
			a.pb(n --);
			f = true;
		}
	}
	
	
	cout << "YES\n";
	cout << a.size() << "\n";
	for (int& x: a)
		cout << x << " ";
	cout << "\n";
	cout << b.size() << "\n";
	
	for (int& x: b)
		cout << x << " ";
	cout << "\n";
	cerr << "time taken: " << (float)clock()/CLOCKS_PER_SEC << " secs" << endl;
	return 0;
}


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
