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

void Input() {
	cin >> n >> m;
}

void Solve() {
	int a[n][m];
	vi pos_x, pos_y;
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j) {
			cin >> a[i][j];
			if(a[i][j] == 1) {
				pos_x.push_back(i);
				pos_y.push_back(j);
			}
		}
	for (int i = 0; i < pos_x.size(); ++i) {
		for (int j = 0; j < n; ++j)
			a[j][pos_y[i]] = 1;
		for (int j = 0; j < m; ++j)
			a[pos_x[i]][j] = 1;		
	}
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j)
			cout << a[i][j] << " ";
		cout << endl;	
	}
}

int main() {
	faster();
	tester() {
		Input();
		Solve();
	}
	return 0;
}
