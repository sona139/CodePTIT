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

string a;
int k;

void Input() {
	cin >> a >> k;
}

void Solve() {
	int s = a.size();
	int ans = 0;
	for (int i = 0; i < s; ++i) {
		vi mark('z' + 1, 1);
		int temp = 0;
		int j = i;
		while(temp <= k && j < s) {
			temp += mark[a[j]];
			mark[a[j]] = 0;
			++j;
			if(temp == k)
				++ans;	
		}
	}
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
