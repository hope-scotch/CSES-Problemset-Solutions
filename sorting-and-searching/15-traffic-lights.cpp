/***
0 1 2 3 4 5 6 7 8

    2 3     6
<-----x--------->
   3      5
<-----x-----x--->
   3     3    2
<---x-x-----x--->              
  2  1   3    2  
  
***/

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
	
	int x, n;
	cin >> x >> n;
	
	set<int> st;
	st.insert(0);
	st.insert(x);
	
	// multiset<int, greater<int>> ans;
	map<int, int> ans;
	ans[x] = 1;
	
	for (int i = 0; i < n; i++) {
		int p; cin >> p;
		
		auto it = st.lower_bound(p);
		
		int a = *it;
		--it;
		int b = *it;
		
		// cout << b << " " << a << " ";
		
		// cout << temp << " ";
		ans[a - b] --;
		if (!ans[a - b])
			ans.erase(a - b);
		
		// int temp = *ans.begin();
		// cout << temp << " ";
		
		// int res = max(temp, max(a - p, p - b));
		st.insert(p);
		ans[a - p] ++; // ans.insert(a - p);
		ans[p - b] ++; // ans.insert(p - b);
		
		// for (int k: ans)
			// cout << k << " ";
		// cout << "\n";
		
		cout << (--ans.end())->first << " ";
	}
	
	cerr << "time taken: " << (float)clock()/CLOCKS_PER_SEC << " secs" << endl;
	return 0;
}


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
