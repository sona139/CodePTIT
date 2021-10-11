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

int n;
int a[500];

void Input() {
	cin >> n;
	for (int i = 0; i < n*n; ++i)
		cin >> a[i];
}

void Solve() {
	sort(a, a + n*n);
	int ans[n+2][n+2];
	int row = 0, col = 0, N = n, pos = 0;
	while(row <= n/2) {
		for (int i = col; i < N ; ++i)
			ans[row][i] = a[pos++];
		for (int i = row + 1; i < N; ++i)
			ans[i][N-1] = a[pos++];
		for (int i = N-2; i >= col; --i)
			ans[N-1][i] = a[pos++];
		for (int i = N-2; i > row; --i)
			ans[i][col] = a[pos++];
		++row;
		++col;
		--N;
	}
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j)
			cout << ans[i][j] << " ";
		cout << endl;
	}
}

int main() {
	faster();
	Input();
	Solve();
	return 0;
}
