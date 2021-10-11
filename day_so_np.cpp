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
const int nMax = 1e3;

int n;
int a[nMax], b[nMax];
int dpa[nMax][nMax], dpb[nMax][nMax];

void Input() {
	cin >> n;
	for (int i = 0; i < n; ++i)
		cin >> a[i];
	for (int i = 0; i < n; ++i)
		cin >> b[i];
}

void Solve() {
	int ans = 0;
	for (int i = 0; i < n; ++i) {
		dpa[i][i] = a[i];
		dpb[i][i] = b[i];
		for (int j = i+1; j < n; ++j) {
			dpa[i][j] = dpa[i][j-1] + a[j];
			dpb[i][j] = dpb[i][j-1] + b[j];
			if(dpa[i][j] == dpb[i][j])
				ans = max(ans, j - i + 1);
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
