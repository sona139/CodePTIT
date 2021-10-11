/* Eat_more */
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;

#define faster() ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define tester() int t; cin >> t; cin.ignore(); while(t--)
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
set <string> s1, s2;

void Input() {
	getline(cin, a);
	getline(cin, b);
}

set <string> tach(string a) {
	stringstream ssa(a);
	string token;
	set <string> s1;
	while(ssa >> token)
		s1.insert(token);
	return s1;
}

bool ok(string a) {
	for (auto i : s2)
		if(i == a)
			return false;
	return true;
}

void Solve() {
	s1 = tach(a);
	s2 = tach(b);
	vector <string> ans;
	for (auto i : s1)
		if(ok(i))
			ans.push_back(i);
	sort(ans.begin(), ans.end());
	for (int i = 0; i < ans.size(); ++i)
		cout << ans[i] << " ";
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
