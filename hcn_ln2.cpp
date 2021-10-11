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

int n, m, a[500][500];

void Input() {
	cin >> n >> m;
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j)
			cin >> a[i][j];
}

int Min(int row, int l, int r) {
	int ans = l;
	for (int i = l + 1; i <= r; ++i)
		if(a[row][ans] > a[row][i])
			ans = i;
	return ans;
}

int maxSize(int row, int l, int r) {
	if(l > r) return 0;
	if(l == r) return a[row][l];
	int pos = Min(row, l, r);
	return max(a[row][pos]*(r-l+1), max(maxSize(row, l, pos - 1), maxSize(row, pos + 1, r)));
}

void Solve() {
	int ans = maxSize(0, 0, m-1);
	for (int i = 1; i < n; ++i) {
		for (int j = 0; j < m; ++j)
			if(a[i][j]) a[i][j] = a[i-1][j] + 1;
		ans = max(ans, maxSize(i, 0, m-1));
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