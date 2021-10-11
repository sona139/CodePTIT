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

int n;
string a[nMax];

void Input() {
	cin >> n;
	for (int i = 0; i < n; ++i)
		cin >> a[i];
}

bool cmp(string a, string b) {	
	return a + b > b + a;
}

void Solve() {
	sort(a, a+n, cmp);
	for (int i = 0; i < n; ++i)
		cout << a[i];
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
