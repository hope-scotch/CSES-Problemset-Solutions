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
	
	// Gray Code:
	// (B4)(B3)(B2)(B1)
	// (B4)(B3 XOR B4)(B2 XOR B3)(B1 XOR B2)
	// 0 XOR 0 -> 0
	// 0 XOR 1 -> 1
	// 1 XOR 0 -> 1
	// 1 XOR 1 -> 0
	
	// 0  -> 0000 -> 0000 -> 0
	// 1  -> 0001 -> 0001 -> 1
	// 2  -> 0010 -> 0011 -> 3
	// 3  -> 0011 -> 0010 -> 2
	// 4  -> 0100 -> 0110 -> 6
	// 5  -> 0101 -> 0111 -> 7
	// 6  -> 0110 -> 0101 -> 5
	// 7  -> 0111 -> 0100 -> 4
	// 8  -> 1000 -> 1100 -> 12
	// 9  -> 1001 -> 1101 -> 13
	// 10 -> 1010 -> 1111 -> 15
	// 11 -> 1011 -> 1110 -> 14
	// 12 -> 1100 -> 1010 -> 10
	// 13 -> 1101 -> 1011 -> 11
	// 14 -> 1110 -> 1001 -> 9
	// 15 -> 1111 -> 1000 -> 8
		
	for (int b = 0; b < (1 << n); b++) {
		if (b & (1 << (n - 1)) ) cout << 1;
		else cout << 0;
		
		for (int k = n - 2; k >= 0; k--) {
			if ( ((b & (1 << (k + 1))) ? 1: 0) ^ ((b & (1 << k)) ? 1: 0)) cout << 1;
			else cout << 0;
		}
		cout << "\n";
	}
		
	
	cerr << "time taken: " << (float)clock()/CLOCKS_PER_SEC << " secs" << endl;
	return 0;
}


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
