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
const int nMax = 1e6 + 1;

int n, p, q;
ll a[nMax], b[nMax], c[nMax];

void Input() {
	cin >> n >> p >> q;
	for (int i = 0; i < n; ++i)
		cin >> a[i];
	for (int i = 0; i < p; ++i)
		cin >> b[i];
	for (int i = 0; i < q; ++i)
		cin >> c[i];
}	

void Solve() {
	int i = 0, j = 0;
	vector <ll> d;
	while(i < n && j < p) {
		if(a[i] == b[j]) {
			d.push_back(a[i]);
			++i;
			++j;
		}
		else if(a[i] > b[j])
			++j;
		else ++i;
	}
	bool ok = false;
	i = 0; j = 0;
	while(i < d.size() && j < q) {
		if(d[i] == c[j]) {
			cout << d[i] << " ";
			ok = true;
			++i;
			++j;
		}
		else if(d[i] > c[j])
			++j;
		else ++i;
	}
	if(!ok) cout << -1;
	cout << endl;
}

int main() {
	tester() {
		Input();
		Solve();
	}
	return 0;
}
