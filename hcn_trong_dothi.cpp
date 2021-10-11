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
int a[nMax];

void Input() {
	cin >> n;
	for (int i = 0; i < n; ++i)
		cin >> a[i];
}

int Min(int l, int r) {
	int ans = l;
	for (int i = l; i <= r; ++i)
		if(a[ans] > a[i])
			ans = i;
	return ans;
}

int process(int l, int r) {
	if(l == r) return a[l];
	if(l > r) return 0;
	int pos = Min(l, r);
	int temp = a[pos]*(r-l);
	return max(temp, max(poscess(0, pos-1), process(pos+1, n-1)));
}

void Solve() {
	cout << process(0, n - 1);
}

int main() {
	faster();
	Input();
	Solve();
	return 0;
}
