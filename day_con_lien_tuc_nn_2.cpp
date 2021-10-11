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
const int nMax = 1e7 + 1;

int n, x;
int a[nMax];

void Input() {
	cin >> n >> x;
	for (int i = 0; i < n; ++i)
		cin >> a[i];
}

void Solve() {
	deque <int> ans;
	int sum = 0, res = in;
	for (int i = 0; i < n; ++i) {
		sum += a[i];
		ans.push_back(a[i]);
		while(sum - ans.front() > x) {
			sum -= ans.front();
			ans.pop_front();
		}
		if(sum > x && res > ans.size())
			res = ans.size();
	}
	res == in ? cout << -1 << endl : cout << res << endl;
}

int main() {
	faster();
	tester() {
		Input();
		Solve();
	}
	return 0;
}
