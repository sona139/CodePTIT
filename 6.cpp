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

void Input() {
	cin >> n;
}

int process(int n) {
	int res = 0;
	while(n%2 == 0) {
		n /= 2;
		res += 2;
	}
	int i = 3;
	while(i <= sqrt(n)) {
		while(n%i == 0) {
			res += i;
			n /= i;
		}
		i += 2;
	}
	if(n > 1) res += n;
	return res;
}

void Solve() {
	int number, ans = 0;
	for (int i = 0; i < n; ++i) {
		cin >> number;
		ans += process(number);
	}
	cout << ans;
}

int main() {
	faster();
	Input();
	Solve();
	return 0;
}
