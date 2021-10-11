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
int a[100][100], sum_row[100];

void Input() {
	cin >> n;
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < n; ++j)
			cin >> a[i][j];
}

int max_col_row() {
	int res = 0;
	for (int i = 0; i < n; ++i) {
		int temp_col = 0, temp_row = 0;
		for (int j = 0; j < n; ++j) {
			temp_col += a[j][i];
			temp_row += a[i][j];
		}
		res = max(res, max(temp_col, temp_row));
		sum_row[i] = temp_row;
	}	
	return res;
}


void Solve() {
	int Max = max_col_row();
	int ans = 0;
	for (int i = 0; i < n; ++i)	
		ans += Max - sum_row[i];
	cout << ans << endl;
}

int main() {
	faster();
	tester() {
		Input();
		Solve();
	}
	return 0;
}
