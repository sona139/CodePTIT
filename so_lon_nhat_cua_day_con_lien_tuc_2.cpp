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
const int nMax = 1e7 + 1;

int n, k;
int a[nMax];

void Input() {
	cin >> n >> k;
	for (int i = 0; i < n; ++i)
		cin >> a[i];
}

void Solve() {
	deque <int> dp;
	for (int i = 0; i < n; ++i) {
		while(dp.size() && a[i] > a[dp.back()])
			dp.pop_back();
		dp.push_back(i);
		if(dp.front() <= i-k)
			dp.pop_front();
		if(i >= k-1)
			cout << a[dp.front()] << " ";
	}
	cout << endl;
}

int main() {
	tester() {
		Input();
		Solve();
	}
	return 0;
}
