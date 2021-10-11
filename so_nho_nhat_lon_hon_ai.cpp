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
vector <int> a;
set <int> s;

void Input() {
	cin >> n;
	a.resize(n);
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		s.insert(a[i]);
	}
}

int binary_search(int k, int l, int r, vi b) {
	int pos = (l + r)/2;
	if(b[pos] == k)
		return pos;
	if(l >= r)
		return -1;
	if(b[pos] < k)
		return binary_search(k, pos+1, r, b);
	else return binary_search(k, l, pos, b);
}

void Solve() {
	vi b;
	for (auto x:s)
		b.push_back(x);
	int ss = b.size();
	for (int i = 0; i < n; ++i) {
		int pos = binary_search(a[i], 0, ss, b);
		if(pos == ss - 1) cout << "_ ";
		else cout << b[pos + 1] << " ";
	}
	a.clear();
	s.clear();
	cout << endl;
}

int main() {
	tester() {
		Input();
		Solve();
	}
	return 0;
}
