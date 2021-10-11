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

int n, m;
int a[300][300], k[3][3];

void Input() {
	cin >> n >> m;
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j)
			cin >> a[i][j];
	for (int i = 0; i < 3; ++i)
		for (int j = 0; j < 3; ++j)
			cin >> k[i][j];
}

void Solve() {
	ll ans = 0;
	for (int i = 0; i <= n-3; ++i)
		for (int j = 0; j <= m-3; ++j)
			for (int r = 0; r < 3; ++r)
				for (int c = 0; c < 3; ++c)
					ans += a[i+r][j+c]*k[r][c];
	cout << ans << endl;
}

int main() {
	tester() {
		Input();
		Solve();
	}
	return 0;
}
