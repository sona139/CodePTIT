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
	getline(cin, a);
}

void Solve() {
	stringstream ss(a);
	string token;
	vector <string> ans;
	while(ss >> token)
		ans.push_back(token);
	for (int i = ans.size() - 1; i >= 0; --i)
		cout << ans[i] << " ";
	cout << endl;
}

int main() {
	faster();
	int t;
	cin >> t;
	cin.ignore();
	while(t--) {
		Input();
		Solve();
	}
	return 0;
