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

int m, n;
int a[100][100], b[10][10];

void Input() {
	cin >> n;
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < n; ++j)
			cin >> a[i][j];
	cin >> m;
	for (int i = 0; i < m; ++i)
		for (int j = 0; j < m; ++j)
			cin >> b[i][j];	
}

void Solve() {
	for (int i = 0; i <= n-m; i += m)
		for (int j = 0; j <= n-m; j += m)
			for (int r = 0; r < m; ++r)
				for (int l = 0; l < m; ++l)
					a[i+r][j+l] *= b[r][l];
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j)
			cout << a[i][j] << " ";
		cout << endl;
	}	
}

int main() {
	faster();
	Input();
	Solve();
	return 0;
}
