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

void Input() {
	cin >> a;
	for (int i = 0; i < a.size(); ++i)
		if(a[i] > 'Z')
			a[i] -= 32;
}

int replace_(char x) {
	if('A' <= x && x <= 'C')
		return 2;
	if('D' <= x && x <= 'F')
		return 3;
	if('G' <= x && x <= 'I')
		return 4;
	if('J' <= x && x <= 'L')
		return 5;
	if('M' <= x && x <= 'O')
		return 6;
	if('P' <= x && x <= 'S')
		return 7;
	if('T' <= x && x <= 'V')
		return 8;
	return 9;
}

bool ok() {
	int s = a.size();
	for (int i = 0; i < s/2; ++i)
		if(replace_(a[i]) != replace_(a[s-1-i]))
			return false;
	return true;
}

void Solve() {
	ok() ? cout << "YES" : cout << "NO";
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
