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

int n, Min1, Min2;
int a[nMax];

void Input() {
	cin >> n;
	Min1 = in; Min2 = in;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];		
		if (a[i] < Min1) {
			Min2 = Min1;
			Min1 = a[i];
		}
		else if(a[i] > Min1 && a[i] < Min2)
			Min2 = a[i];
	}
}

bool ok(int k) {
	int p = a[0]%k;
	for (int i = 1; i < n; ++i)
		if(a[i]%k != p)
			return false;
	return true;
}

void Solve() {
	if(Min2 == in)
		cout << 0;
	else {
		int cnt = 0;
		for (int i = 1; i <= Min2 - Min1; ++i)
			if(ok(i))
				++cnt;
			cout << cnt;
	}
	cout << endl;
}

int main() {
	tester() {
		Input();
		Solve();
	}
	return 0;
}
