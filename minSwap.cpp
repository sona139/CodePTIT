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
vector <pii> a;

void Input() {
	cin >> n;
	a.resize(n);
	for (int i = 0; i < n; ++i) {
		cin >> a[i].fi;
		a[i].se = i;
	}
}

void Solve() {
	vector <pii> b = a;
	sort(a.begin(), a.end());
	vector <bool> mark(n);
	int ans = 0;
	for (int i = 0; i < n; ++i)
		if(a[i].se != i && !mark[i]) {
			int pos = a[i].se;
			mark[pos] = true;
			int cnt = 1;
			while(pos != i && !mark[i]) {
				pos = a[pos].se;
				mark[pos] = true;
				++cnt;
			}
			ans += cnt - 1;
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