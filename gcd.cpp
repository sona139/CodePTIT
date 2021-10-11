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

int n, a[1000];

void Input() {
	cin >> n;
	for (int i = 0; i < n; ++i)
		cin >> a[i];
}

ll lcm(int a, int b) {
	int gcd = __gcd(a, b);
	return (ll)a/gcd*b;
}

void Solve() {
	ll b[n+1];
	b[0] = a[0];
	for (int i = 1; i < n; ++i)
		b[i] = lcm(a[i-1], a[i]);
	b[n] = a[n-1];
	for (int i = 0; i <= n; ++i)
		cout << b[i] << " ";
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
