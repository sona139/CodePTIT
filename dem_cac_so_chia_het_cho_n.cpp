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

int n, m, cnt, d;
string a;

void Input() {
	cin >> m >> n >> a;
	for (int i = 0; i < m; ++i) {
		a[i] -= '0';
		a[i] %= n;
	}
}

void Try(int i) {
	for (int j = i; j < m; ++j) {
		int temp = d;
		d *= 10;
		d += a[j];
		d %= n;
		if(!d) ++cnt;
		Try(j+1);
		d = temp;
	}
}

void Solve() {
	cnt = 0;
	Try(0);
	cout << cnt << endl;
}

int main() {
	faster();
	tester() {
		Input();
		Solve();
	}
	return 0;
}
