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

int n, m;
vector <vector <db> > a;

void Input() {
	cin >> n >> m;
	a.resize(n);
	for (int i = 0; i < n; ++i) {
		a[i].assign(max(n, m), 0);
		for (int j = 0; j < m; ++j)
			cin >> a[i][j];
	}
}

void Solve() {
	int rank = n;
	for (int i = 0; i < n; ++i)
		for (int j = i+1; j < n; ++j) {
			if(a[j][j] == 0) {
				int k = j+1;
				while(k < n && a[k][j == 0])
					++k;
				if(k == n) --rank;
				else swap(a[j], a[k]);
			}
			if(a[j][i] != 0) {
				for (int k = 0; k < m; ++k)
					a[j][k] -= a[j][0]/a[i][0]*a[i][k];
			}
		}
	cout << rank << endl;
}

int main() {
	faster();
	Input();
	Solve();
	return 0;
}
