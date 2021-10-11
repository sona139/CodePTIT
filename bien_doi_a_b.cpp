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

string a;

void Input() {
	cin >> a;
	while(a.back() == 'A')
		a.pop_back();
}

void Solve() {
	int s = a.size();
	int i = 0;
	vi cnt;
	while(i < s) {
		int j = i+1;
		while(a[j] == a[i])
			++j;
		cnt.push_back(j - i);
		i = j;
	}
	int dp[cnt.size() + 1];
	dp[cnt.size()] = 0;
	dp[cnt.size() - 1] = 1;
	for (int i = cnt.size() - 1; i >= 0; --i)
		if(cnt[i+1] == 1)
			dp[i] = dp[i+2] + 1;
		else dp[i] = dp[i+1] + 1;
	cout << dp[0];
}


int main() {
	faster();
	Input();
	Solve();
	return 0;
}
