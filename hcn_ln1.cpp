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
#define endl '\n';
const int Mod = 1e9 + 7;
const int nMax = 1e5 + 1;
 
int n, m, a[15][15];
 
void Input() {
	cin >> n >> m;
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j)
			cin >> a[i][j];
}

int maxSize() {
	int dp[n][m];
	vector <vi> New;
	New.resize(n);
	for (int i = 0; i < m; ++i)
		dp[0][i] = a[0][i];
	for (int i = 1; i < n; ++i)
		for (int j = 0; j < m; ++j)
			dp[i][j] = a[i][j] ? dp[i-1][j] + 1 : 0;
	for (int i = 0; i < n; ++i) {
		int cnt[m+1] = {0};
		for (int j = 0; j < m; ++j)
			++cnt[dp[i][j]];
		for (int j = m; j >= 0; --j) {
			int k = cnt[j];
			while(k--)
				New[i].push_back(j);
		}
	}
	int ans = 0;
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j)
			ans = max(ans, (j+1)*New[i][j]);
	return ans;
}
 
void Solve() {
	cout << maxSize() << endl;
}
 
int main() {
	faster();
	tester() {
		Input();
		Solve();
	}
	return 0;
}