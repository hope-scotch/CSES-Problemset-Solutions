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

void solve(vector<string>& res, vector<bool>& chosen, string s, string t, int n) {
	if ((int)t.length() == n) {
		res.pb(t);
		return;
	}	
	
	for (int i = 0; i < n; i++) {
		if (chosen[i]) continue;
		chosen[i] = true;
		t.pb(s[i]);
		
		solve(res, chosen, s, t, n);
		
		chosen[i] = false;
		t.pop_back();
	}
}

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
	
	vector<string> res;
	vector<bool> chosen(n, false);
	
	solve(res, chosen, s, "", n);
	
	set<string> st;
	
	int cnt = 0;
	
	for (string& str: res) {
		if (!st.count(str)) {
			st.insert(str);
			cnt ++;
		}
	}
	
	cout << cnt << "\n";
	for (string str: st)
		cout << str << "\n";
	
	cerr << "time taken: " << (float)clock()/CLOCKS_PER_SEC << " secs" << endl;
	return 0;
}


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////