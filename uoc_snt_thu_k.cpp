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

int n, k;

void Input() {
	cin >> n >> k;
}

int process() {
	int res = 0;
	while(n%2 == 0) {
		++res;
		n /= 2;
		if(res == k)
		return 2;
	}
	int i = 3;
	while(i <= sqrt(n)) {
		while(n%i == 0) {
			++res;
			n /= i;
			if(res == k)
				return i;
		}
		i += 2;
	}
	if(n > 1 && res + 1 == k)
		return n;
	return -1;
}

void Solve() {
	cout << process() << endl;
}

int main() {
	faster();
	tester() {
		Input();
		Solve();
	}
	return 0;
}
