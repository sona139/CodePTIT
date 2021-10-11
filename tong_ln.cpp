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

int n, m, sum_a, sum_b, r;
vi a, b;

void Input() {
	sum_a = 0;
	sum_b = 0;
	cin >> n >> m;
	r = max(n, m);
	a.resize(r, 0);
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		sum_a += a[i];
	}
	b.resize(r, 0);
	for (int i = 0; i < m; ++i) {
		cin >> b[i];
		sum_b += b[i];
	}
}

void Solve() {
	int sum = sum_b;
	int ans = sum;
	for (int i = 0; i < r; ++i) {
		sum += a[i] - b[i];
		ans = max(ans, sum);
	}
	sum = sum_a;
	ans = max(ans, sum);
	for (int i = 0; i < r; ++i) {
		sum += b[i] - a[i];
		ans = max(ans, sum);
	}
	cout << ans << endl;
	a.clear();
	b.clear();
}

int main() {
	faster();
	tester() {
		Input();
		Solve();
	}
	return 0;
}
