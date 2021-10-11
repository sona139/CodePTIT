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

string a, b;

void Input() {
	cin >> a >> b;
}

string process(int i, int s1, vi mark, int cnt) {
	string res;
	vi markA(26, 0);
	for (int j = i; j < s1; ++j) {
		res += a[j];
		--mark[a[j] - 'a'];
		if(!mark[a[j] - 'a'])
			--cnt;
		if(!cnt)
			return res;
	}
	return a;
}

void Solve() {
	vi mark(26, 0);
	int cnt = 0;
	int s1 = a.size(), s2 = b.size();
	for (int i = 0; i < s2; ++i) {
		if(!mark[b[i] - 'a'])
			++cnt;
		++mark[b[i] - 'a'];
	}
	string ans = a;
	for (int i = 0; i < s1; ++i) {
		string temp = process(i, s1, mark, cnt);
		if(temp.size() < ans.size())
			ans = temp;
	}
	ans == a ? cout << -1 : cout << ans;
	cout << endl;
}

int main() {
	faster();
	tester() {
		Input();
		Solve();
	}
	return 0;
}