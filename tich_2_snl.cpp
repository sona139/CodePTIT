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

string s1, s2;

void Input() {
	cin >> s1 >> s2;
}

vi Plus(vi a, vi b) {
	int sa = a.size(), sb = b.size();
	if(sa < sb) {
		swap(sa, sb);
		swap(a, b);
	}
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());
	a.push_back(0);
	for (int i = sb; i <= sa; ++i)
		b.push_back(0);
	vi ans;
	for (int i = 0; i <= sa; ++i) {
		int temp = a[i] + b[i];
		if(temp > 9) {
			temp -= 10;
			a[i+1]++;
		}
		ans.push_back(temp);
	}
	reverse(ans.begin(), ans.end());
	if(ans[0] == 0)
		ans.erase(ans.begin());
	return ans;
}

void Solve() {
	vi a, b;
	int sa = s1.size(), sb = s2.size();
	a.push_back(0);
	for (int i = 0; i < sa; ++i)
		a.push_back(s1[i] - '0');
	for (int i = 0; i < sb; ++i)
		b.push_back(s2[i] - '0');
	++sa;
	vector <vi> ans(sb);
	for (int i = sb - 1; i >= 0; --i) {
		int memory = 0;
		for (int j = sa - 1; j >= 0; --j) {
			int temp = b[i]*a[j] + memory;
			memory = temp/10;
			temp %= 10;
			ans[i].push_back(temp);
		}
		reverse(ans[i].begin(), ans[i].end());
		for (int j = 0; j < sb - i - 1; ++j)
			ans[i].push_back(0);
	}
	vi res;
	for (int i = 0; i < sb; ++i)
		res = Plus(ans[i], res);
	if(res[0] == 0)
		res.erase(res.begin());
	for (int i = 0; i < res.size(); ++i)
		cout << res[i];
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