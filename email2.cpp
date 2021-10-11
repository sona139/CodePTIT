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
string a[1000];

void Input() {
	cin >> n;
	cin.ignore();
	for (int i = 0; i < n; ++i)
		getline(cin, a[i]);
}

void Solve() {
	vector <vector <string> > s;
	string token;
	s.resize(n);
	for (int i = 0; i < n; ++i) {
		stringstream ss(a[i]);
		while(ss >> token) {
			for (int j = 0; j < token.size(); ++j)
				if(token[j] < 'a')
					token[j] += 32;
			s[i].push_back(token);
		}
	}
	vector <string> email;
	email.resize(n);
	for (int i = 0; i < n; ++i)	{
		email[i] += s[i][s[i].size() - 1];
		for (int j = 0; j < s[i].size() - 1; ++j)
			email[i] += s[i][j][0];
	}
	for (int i = 0; i < n; ++i) {
		cout << email[i];
		int cnt = 0;
		for (int j = 0; j <= i; ++j)
			if(email[j] == email[i])
				++cnt;
		if(cnt > 1)
			cout << cnt;
		cout << "@ptit.edu.vn" << endl;
	}
}

int main() {
	faster();
	Input();
	Solve();
	return 0;
}
