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
const int nMax = 1e3 + 1;

int a[50][50], b[50][50];
int n, m, p;

void Input() {
	cin >> n >> m >> p;
	for (int i = 0; i < n; ++i)	
		for (int j = 0; j < m; ++j)
			cin >> a[i][j];
	for (int i = 0; i < m; ++i)	
		for (int j = 0; j < p; ++j)
			cin >> b[i][j];
}

void Solve() {
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < p; ++j) {
			int temp = 0;
			for (int k = 0; k < m; ++k)
				temp += a[i][k]*b[k][j];
			cout << temp << " ";
		}
		cout << endl;
	}
}

int main() {
	faster();
	Input();
	Solve();
	return 0;
}
