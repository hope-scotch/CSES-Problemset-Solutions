////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
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
	
	int n, x;
	cin >> n >> x;
	
	vpi v;
	
	for (int i = 0; i < n; i++) {
		int x; cin >> x;
		v.pb({x, i + 1});
	}
	
	sort(all(v));
	
	int i = 0, j = n - 1;
	int res1 = -1, res2 = -1;
	
	while (i < j) {
		if (v[i].ff + v[j].ff == x) {
			res1 = v[i].ss, res2 = v[j].ss;
			break;
		} else if (v[i].ff + v[j].ff > x) j --;
		else i ++;
	}
	
	if (res1 == -1 && res2 == -1)
		cout << "IMPOSSIBLE\n";
	else
		cout << res1 << " " << res2 << "\n";
	
	cerr << "time taken: " << (float)clock()/CLOCKS_PER_SEC << " secs" << endl;
	return 0;
}


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////