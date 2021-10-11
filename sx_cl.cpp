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

int n;
int a[nMax];

void Input() {
	cin >> n;
	for (int i = 0; i < n; ++i)
		cin >> a[i];	
}

void Solve() {
	sort(a, a+n);
	vi b, c;
	for (int i = 0; i < n/2; ++i) {
		b.push_back(a[i]);
		c.push_back(a[(n+1)/2 + i]);
	}
	for (int i = 0; i < n/2; ++i)
		cout << b[i] << " " << c[i] << " ";
	if(n%2) cout << a[n/2];
	cout << endl;
}

int main() {
	faster();
	tester() {
		Input();
		Solve();
	}
	return 0;
}
