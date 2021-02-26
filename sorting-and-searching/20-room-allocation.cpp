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
	
	int n; cin >> n;
	// multimap<pair<int, int>, int> idx;
	vvi v;
	
	for (int i = 0; i < n; i++) {
		int x, y; cin >> x >> y;
		v.pb({x, y, i});
		// idx.insert({{x, y}, i});
	}
	
	sort(all(v));
	
	set<vector<int>> p;
	vi rooms(n);
	
	for (int i = 0; i < n; i++) {
		auto it = p.lower_bound({v[i][0]});
		
		// cout << idx.find({v[i][0], v[i][1]}) << " ";
		// cout << v[i][0] << ", " << v[i][1] << " -> ";
		if (it == p.begin()) {
			// res ++;
			rooms[v[i][2]] = p.size();
			// p.pb(v[i][1]);
		} else { 
			--it;
			rooms[v[i][2]] = (*it)[1];
			p.erase(it);
		}
		
		p.insert({v[i][1], rooms[v[i][2]]});
		
		
		// cout << rooms[v[i][2]] << "\n";
		
		// for (int x: p)
			// cout << x << " ";
		// cout << "\n";
	}

	cout << p.size() << "\n";
	for (int& x: rooms)
		cout << x + 1<< " ";
	cout << "\n";
	
	cerr << "time taken: " << (float)clock()/CLOCKS_PER_SEC << " secs" << endl;
	return 0;
}


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
