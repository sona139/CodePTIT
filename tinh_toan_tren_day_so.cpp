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
ll a[nMax];

ll h, g;

void Input() {
	cin >> n;
	h = 1;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		h *= a[i];
		h %= Mod;
	}
	g = a[0];
	for (int i = 1; i < n; ++i)
		g = __gcd(g, a[i]);
}

ll mul(ll a, ll k) {
	if(k == 0 | a == 1)
		return 1;
	ll temp = mul(a, k/2);
	if(k%2) return temp%Mod*temp%Mod*a%Mod;
	return temp%Mod*temp%Mod;
}

void Solve() {
	cout << mul(h, g) << endl;
}

int main() {
	tester() {
		Input();
		Solve();
	}
	return 0;
}
