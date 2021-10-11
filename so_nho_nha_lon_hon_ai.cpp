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

int n, Max;
int a[nMax];
vector <bool> mark;

void Input() {
	cin >> n;
	Max = 0;
	mark.resize(nMax);
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		mark[a[i]] = true;
		Max = max(Max, a[i]);
	}
}

void Solve() {
	for (int i = 0; i < n; ++i)
		if(a[i] == Max)
			cout << "_ ";
		else {
			int j = a[i] + 1;
			while(!mark[j])
				++j;
			cout << j << " ";
		}
	cout << endl;
	mark.clear();
}

int main() {
	tester() {
		Input();
		Solve();
	}
	return 0;
}
