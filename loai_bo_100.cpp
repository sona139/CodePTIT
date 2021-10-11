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
}

void Solve() {
	int ans = 0, s = a.size();
	vector <char> b;
	for (int i = 0; i < s; ++i) {
		b.push_back(a[i]);
		int sb = b.size();
		while(sb >= 3 && b[sb - 3] == '1' && b[sb - 2] == '0' && b[sb - 1] == '0') {
			b.pop_back();
			b.pop_back();
			b.pop_back();
			sb -= 3;
			ans += 3;
		}
	}
	cout << ans << endl;
}

int main() {
	tester() {
		Input();
		Solve();
	}
	return 0;
}