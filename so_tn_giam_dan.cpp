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

string a[10000];
int s = 0;

void Input() {
	while(cin >> a[s])
		++s;
}

bool tn(string a, string b) {
	if(a.size() == 1)
		return false;
	reverse(a.begin(), a.end());
	return a == b;
}

bool cmp(string a, string b) {
	if(a.size() > b.size())
		return true;
	if(a.size() == b.size())
		return a > b;
	return false;
}

void Solve() {
	vector <string> ans;
	for (int i = 0; i < s; ++i)
		if(tn(a[i], a[i]))
			ans.push_back(a[i]);
	sort(ans.begin(), ans.end(), cmp);
	for (int i = 0; i < ans.size(); ++i) {
		if(ans[i].size()) {
			int cnt = 1;
			for (int j = i+1; j < ans.size(); ++j)
				if(ans[j] == ans[i]) {
					++cnt;
					ans[j] = "";
				}
			cout << ans[i] << " " << cnt << endl;
		}
	}
}

int main() {
	faster();
	Input();
	Solve();
	return 0;
}
