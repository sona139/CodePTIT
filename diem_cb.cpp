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

int n, sum_p;
int a[nMax];

void Input() {
	sum_p = 0;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		sum_p += a[i];
	}
}

int _cb() {
	int sum_t = 0;
	sum_p -= a[0];
	for (int i = 1; i < n; ++i) {
		sum_t += a[i-1];
		sum_p -= a[i];
		if(sum_t == sum_p)
			return i + 1;
	}
	return -1;
}

void Solve() {
	cout << _cb() << endl;
}

int main() {
	faster();
	tester() {
		Input();
		Solve();
	}
	return 0;
}
