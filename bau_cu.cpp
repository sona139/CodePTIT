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

int n, m, number;
map <int, int> mark;

void Input() {
	cin >> n >> m;
	for (int i = 0; i < n; ++i) {
		cin >> number;
		++mark[number];
	}
}

void Solve() {
	int Max = 0;
	for (int i = 1; i <= m; ++i)
		Max = max(Max, mark[i]);
	int ans = 0;
	for (int i = 1; i <= m; ++i)
		if(mark[i] > mark[ans] && mark[i] < Max)
			ans = i;
	ans == 0 ? cout << "NONE" : cout << ans;
}

int main() {
	faster();
	Input();
	Solve();
	return 0;
}
