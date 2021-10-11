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
const int nMax = 200;

int n, m, a[nMax][nMax];

void Input() {
	cin >> n >> m;
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j)
			cin >> a[i][j];
}

void Solve() {
	int ans = im;
	for (int i = 0; i < m; ++i) {
		int temp[n] = {0};
		for (int j = i; j < m; ++j) {
			int m = 0;
			for (int k = 0; k < n; ++k) {
				temp[k] += a[k][j];
				m = max(temp[k], temp[k] + m);
				ans = max(ans, m);
			}
		}
	}
	cout << ans << endl;
}

int main() {
	faster();
	tester() {
		Input();
		Solve();
	}
	return 0;
}
