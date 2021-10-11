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
const int nMax = 1e6 + 1;

int n, m, ip;
int a[nMax];
map <int, int> b;

void Input() {
	cin >> n >> m;
	for (int i = 0; i < n; ++i)
		cin >> a[i];
	
	for (int i = 0; i < m; ++i) {
		cin >> ip;
		b.insert({ip, i});
	}
	for (int i = 0; i < n; ++i)
		b.insert({a[i], in});
}

bool cmp(int a1, int a2) {
	if(b[a1] != in || b[a2] != in)
		return b[a1] < b[a2];
	return a1 < a2;
}

void Solve() {
	sort(a, a+n, cmp);
	for (int i = 0; i < n; ++i)	
		cout << a[i] << " ";
	cout << endl;
	b.clear();
}

int main() {
	faster();
	tester() {
		Input();
		Solve();
	}
	return 0;
}
