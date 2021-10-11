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

bool ok() {
	if(a[0] == '0') {
		cout << "INVALID";
		return false;
	}
	bool mark[10];
	for (int i = 0; i < a.size(); ++i)
		if(a[i] >= '0' && a[i] <= '9')
			mark[a[i] - '0'] = true;
		else {
			cout << "INVALID";
			return false;
		}			
	for (int i = 0; i < 10; ++i)
		if(!mark[i]) {
			cout << "NO";
			return false;
		}
	return true;
}

void Solve() {
	if(ok()) cout << "YES";
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
