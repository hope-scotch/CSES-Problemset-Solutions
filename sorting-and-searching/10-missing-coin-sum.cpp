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

/****
	1 1

	wanted sum - 4

	known sums - 1 2 3

	sum uptil prefix_sum has been taken care of.

	1 1 1, -> 3 needed
	1 1 2, -> 3, 4

	1 1 2 2
	1 1 2 3
	1 1 2 4
	1 1 2 5
	1 1 2 6 (x)
	 
	1 1 3  -> 3, 4, 5

	1 1 3 3
	1 1 3 4
	1 1 3 5
	1 1 3 6
	1 1 3 7 (x)

***/

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
	
	for (int i = 0; i < n; i++)
		cin >> v[i];
	
	sort(all(v));
	
	ll sum = 0;
	
	int k = 1;
	
	for (int i = 0; i < n; i++) {
		if (v[i] > sum + 1) break;
		
		// Targets up till "sum" has been taken care of
		sum += v[i];
	}
	
	cout << sum + 1 << "\n";
		
	
	cerr << "time taken: " << (float)clock()/CLOCKS_PER_SEC << " secs" << endl;
	return 0;
}


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////