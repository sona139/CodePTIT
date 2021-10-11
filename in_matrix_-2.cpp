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
 
int n, N;
 
void Input() {
	cin >> n;
	N = 4*n;
}
 
void process(vector <vi> a, vi &c) {
	int i1 = 0, i2 = N-1;
	int j1 = 0, j2 = N-2;
	while(i1 <= i2) {
		for (int i = i1; i < i2; ++i)	
			c.push_back(a[i][j1]);
		for (int j = j1; j < j2; ++j)
			c.push_back(a[i2][j]);
		++i1;
		for (int i = i2; i > i1; --i)
			c.push_back(a[i][j2]);
		++j1;
		for (int j = j2; j > j1; --j)
			c.push_back(a[i1][j]);
		++i1;
		++j1;
		i2 -= 2;
		j2 -= 2;
	}
}
 
void xuat(vi a) {
	for (int i = a.size() - 1; i >= 0; --i)
		cout << a[i] << " ";
	cout << endl;
}
 
void Solve() {
	vector <vi> a;
	int cnt = 1;
	a.resize(N);
	for (int i = 0; i < N; ++i)
		for (int j = 0; j < N; ++j)
			a[i].push_back(cnt++);
	vi c1, c2;
	process(a, c1);
	reverse(a.begin(), a.end());
	for (int i = 0; i < N; ++i)
		reverse(a[i].begin(), a[i].end());
	process(a, c2);
	xuat(c2);
	xuat(c1);
}
 
int main() {
	faster();
	tester() {
		Input();
		Solve();
	}
	return 0;
}