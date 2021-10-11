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
int a[102];

void Input() {
	cin >> n;
	for (int i = 1; i <= n; ++i)
		cin >> a[i];
}

void Solve() {
	int dpt[n+1];
	a[0] = im;
	dpt[0] = 1;
	for (int i = 1; i <= n; ++i) {
		int pos = 0;
		for (int j = 1; j < i; ++j)
			if(a[j] < a[i] && dpt[j] > dpt[pos])
				pos = j;
		dpt[i] = dpt[pos] + 1;
	}
	int dpg[n+2];
	a[n+1] = im;
	dpg[n+1] = 1;
	for (int i = n; i >= 1; --i) {
		int pos = n+1;
		for (int j = n; j > i; --j)
			if(a[j] < a[i] && dpg[j] > dpg[pos])
				pos = j;
		dpg[i] = dpg[pos] + 1;
	}
	int ans = 0;
	for (int i = 1; i <= n; ++i)
		ans = max(ans, dpg[i] + dpt[i] - 3);
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
