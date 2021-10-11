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
const int nMax = 1e3 + 1;

int n;
int a[nMax];
int b[nMax];

void Input() {
	cin >> n;
	a[0] = im;
	for (int i = 1; i <= n; ++i)
		cin >> a[i];
}

void Solve() {
	int dp[n+1];
	dp[0] = 0;
	int Max = 0;
	for (int i = 1; i <= n; ++i) {
		int pos = 0;
		for (int j = i-1; j > 0; --j)
			if(a[j] < a[i] && dp[j] > dp[pos])
				pos = j;
		dp[i] = dp[pos] + 1;
		Max = max(Max, dp[i]);
		b[i] = pos;
	}
	for (int i = n-1; i > 0; --i)
		if(Max == dp[i]) {
			Max = i;
			break;
		}
	while(a[Max] != im) {
		cout << a[Max] << " ";
		Max = b[Max];
	}
}

int main() {
	faster();
	Input();
	Solve();
	return 0;
}
