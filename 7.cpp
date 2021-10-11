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

int l, r, snt[nMax] = {0};

void sang() {
	snt[0] = 1;
	snt[1] = 1;
	for (int i = 2; i <= 318; ++i)
		if(!snt[i])
			for (int j = i*i; j < nMax; j += i)
				snt[j] = 1;
}

void Input() {
	cin >> l >> r;
}

void Solve() {
	int cnt = 0;
	for (int i = l; i <= r; ++i)
		if(!snt[i])
			++cnt;
	cout << cnt << endl;
}

int main() {
	faster();
	sang();
	tester() {
		Input();
		Solve();
	}
	return 0;
}
