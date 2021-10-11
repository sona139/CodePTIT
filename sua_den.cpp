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

int n, k, b, ip;
vector <bool> mark;

void Input() {
	cin >> n >> k >> b;
	mark.resize(n+1, true);
	for (int i = 0; i < b; ++i) {
		cin >> ip;
		mark[ip] = false;
	}
}

void Solve() {
	int dp = 0;
	for (int i = 1; i <= k; ++i)
		dp += mark[i];
	int ans = k - dp;
	for (int i = k+1; i <= n; ++i) {
		dp += mark[i];
		dp -= mark[i-k];
		ans = min(ans, k - dp);
	}
	ans < 0 ? cout << 0 : cout << ans;
	cout << endl;
}

int main() {
	faster();
	Input();
	Solve();
	return 0;
}
