/* Eat_more */
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;

#define faster() ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define tester() int t; cin >> t; while(t--)
#define PI atan(1)*4
#define in INT_MAX
#define im INT_MIN
#define fi first
#define se second
#define vi vector <int>
#define vll vector <ll>
#define pii pair <int, int>
#define mp(x, y) make_pair(x, y)
const int Mod = 1e9 + 7;
const int nMax = 1e5 + 1;

int n, m, k, K;
int a[500][500];

void Input() {
	cin >> n >> m >> k;
	K = k*k;
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j)
			cin >> a[i][j];	
}

void Solve() {
	int dp[n] = {0};
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < k; ++j)
			dp[i] += a[i][j];
	for (int i = 0; i <= n-k; ++i) {
		int ans = 0;
		for (int j = 0; j < k; ++j)
			ans += dp[j+i];
		cout << ans/K << " ";
		for (int j = k; j < m; ++j) {
			for (int l = 0; l < k; ++l)
				ans += a[i+l][j] - a[i+l][j-k];
			cout << ans/K << " ";
		}
		cout << endl;
	}
}

int main() {
	tester() {
		Input();
		Solve();
	}
	return 0;
}