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

void solve();

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("error.txt", "w", stderr);
		freopen("output.txt", "w", stdout);
	#endif
	
	string s; cin >> s;
	int n = s.length();
	unordered_map<char, int> f;
	
	for (char& ch: s)
		f[ch] ++;
	
	bool ok = false;
	
	char mid;
	
	for (auto it: f) {
		if ((it.second % 2) && ok) { cout << "NO SOLUTION\n"; return 0; }
		if (it.second % 2) { ok = true; mid = it.first; }
	}
	
	string t1 = "";
	
	for (auto it: f) {
		if (it.first == mid) continue;
		for (int i = 0; i < it.second / 2; i++)
			t1.pb(it.first);
	}
	
	string t2 = "";
	
	for (auto it: f) {
		if (it.first == mid) continue;
		for (int i = it.second / 2; i < it.second; i++)
			t2.pb(it.first);
	}
	
	reverse(all(t2));
	
	if (n % 2) {
		for (int i = 0; i < f[mid]; i++)
			t1.pb(mid);
	}
	
	t1.append(t2);
	
	cout << t1 << "\n";
	
	
	
	
	
	cerr << "time taken: " << (float)clock()/CLOCKS_PER_SEC << " secs" << endl;
	return 0;
}


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
