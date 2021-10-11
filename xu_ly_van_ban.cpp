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

string a[10000];
int s = 0;

void Input() {
	while(cin >> a[s])
		++s;	
}

void chuan_hoa() {
	for (int i = 0; i < s; ++i)
		for (int j = 0; j < a[i].size(); ++j)
			if(a[i][j] >= 'A' && a[i][j] <= 'Z')
				a[i][j] += 32;
}

void Solve() {
	chuan_hoa();
	bool check = true, end = false;
	for (int i = 0; i < s; ++i) {
		if(check)
			a[i][0] -= 32;
		char x = a[i][a[i].size() - 1];
		if(x == '.' || x == '!' || x == '?') {
			end = true;
			check = true;
			a[i].erase(a[i].size() - 1, 1);
		}
		else {
			check = false;
			end = false;
		}
		cout << a[i];
		if(end) cout << endl;
		else if(i != s-1) cout << " ";
	}
}

int main() {
	faster();
	Input();
	Solve();
	return 0;
}
