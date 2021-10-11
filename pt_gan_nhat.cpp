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
const int nMax = 1e6 + 1;

int n, a[nMax], k, x;

void Input() {
	cin >> n;
	for (int i = 0; i < n; ++i)
		cin >> a[i];
	cin >> k >> x;
}

void Solve() {
	int l = lower_bound(a, a+n, x) - a;
	for (int i = l - k/2; i < l; ++i)
		cout << a[i] << " ";
	if(a[l] == x) ++l;
	for (int i = l; i < l + k/2; ++i)
		cout << a[i] << " ";
	cout << endl;
}

int main() {
	faster();
	tester() {
		Input();
		Solve();
	}
	return 0;
}
