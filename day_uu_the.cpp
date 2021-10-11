/* Eat_more */
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;

#define faster() ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define tester() int t; cin >> t; cin.ignore(); while(t--)
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

string input;

void Input() {
	getline(cin, input);
}

void Solve() {
	stringstream ss(input);
	string token;
	vector <string> a;
	while(ss >> token)
		a.push_back(token);
	int cnt = 0;
	int s = a.size();
	for (int i = 0; i < s; ++i)
		if(a[i][a[i].size() - 1]%2)
			++cnt;
	if(cnt > s/2 && s%2 || cnt < s/2 && s%2 == 0)
		cout << "YES";
	else cout << "NO";
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
