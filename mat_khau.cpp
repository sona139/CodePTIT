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
vector <string> a;
map <string, int> m;

void Input() {
	cin >> n;
	a.resize(n);
	for (int i = 0; i < n; ++i)  {
		cin >> a[i];
		m[a[i]]++;
	}
}

void Solve() {
	int dp[n], s = 0;
	for (auto i:m)
		dp[s++] = i.second - 1;
	for (int i = 1; i < s; ++i)
		if()
}

int main() {
	faster();
	Input();
	Solve();
	return 0;
}
