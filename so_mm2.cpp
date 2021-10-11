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
	while(a.size() > 1) {
		string temp;
		int cnt = 0;
		for (int i = 0; i < a.size(); ++i)
			cnt += a[i] - '0';
		while(cnt) {
			temp.push_back(cnt%10 + '0');
			cnt /= 10;
			reverse(temp.begin(), temp.end());
			a = temp;
		}
	}
	a == "9" ? cout << 1 : cout << 0;
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
