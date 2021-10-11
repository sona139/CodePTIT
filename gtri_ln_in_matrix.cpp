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

int n, a[400][400], Max;

void Input() {
	cin >> n;
	Max = 0;
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < n; ++j) {
			cin >> a[i][j];
			Max = max(Max, a[i][j]);
		}
}

void Solve() {
	int ans = Max;
	for (int rank = 2; rank <= n; ++rank) {
		int right = n - rank;
		for (int i = 0; i <= right; ++i)
			for (int j = 0; j <= right; ++j) {
				int sum = 0;
				int I = 0, J = 0;
				while(I < rank) {
					sum += a[i+I][j+J];
					++I; ++J;
				}
				I = 0; J = rank-1;
				while(I < rank) {
					sum -= a[i+I][j+J];
					++I; --J;
				}
				ans = max(ans, sum);
			}
	}
	cout << ans;
}

int main() {
	faster();
	Input();
	Solve();
	return 0;
}
