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

int n, res, sum, cnt;
int a[20][20];

int I[2] = {0, 1};
int J[2] = {1, 0};

void Input() {
	cin >> n >> res;
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < n; ++j)
			cin >> a[i][j];	
}

bool in_matrix(int i, int j) {
	return i < n && j < n;
}

void Try(int i, int j) {
	sum += a[i][j];
	if(i == n-1 && j == n-1) {
		if(sum == res)
			++cnt;
	}
	else {
		for (int k = 0; k < 2; ++k) {
			int inext = i + I[k];
			int jnext = j + J[k];
			if(in_matrix(inext, jnext))
				Try(inext, jnext);
		}
	}
	sum -= a[i][j];
}

void Solve() {
	sum = 0;
	cnt = 0;
	Try(0, 0);
	cout << cnt << endl;
}

int main() {
	faster();
	tester() {
		Input();
		Solve();
	}
	return 0;
}