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
int l, r;

void Input() {
	cin >> n;
	l = pow(10, n-1);
	r = l*10;
}

bool tang(int n) {
	if(n < 10)
		return true;
	int a = n%10;
	n /= 10;
	while(n) {
		int b = n%10;
		n /= 10;
		if(a <= b)
			return false;
		a = b;
	}
	return true;
}

bool giam(int n) {
	if(n < 10)
		return true;
	int a = n%10;
	n /= 10;
	while(n) {
		int b = n%10;
		n /= 10;
		if(a >= b)
			return false;
		a = b;
	}
	return true;
}

bool snt(int n) {
	if(n < 2)
		return false;
	for (int i = 2; i <= sqrt(n); ++i)
		if(n%i == 0)	
			return false;
	return true;
}

void Solve() {
	int cnt = 0;
	for (int i = l; i < r; ++i)
		if(tang(i) || giam(i))
			if(snt(i))
				++cnt;
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
