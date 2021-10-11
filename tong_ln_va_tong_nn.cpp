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

string a, b;

void Input() {
	cin >> a >> b;
}

string Plus(string a, string b) {
	if(a.size() < b.size())
		swap(a, b);
	int sa = a.size(), sb = b.size();
	reverse(a.begin(), a.end());
	a.push_back('0');
	reverse(b.begin(), b.end());
	for (int i = sb; i <= sa; ++i)
		b.push_back('0');
	string ans;
	for (int i = 0; i <= sa; ++i) {
		char temp = a[i] + b[i] - '0';
		if(temp > '9') {
			temp -= 10;
			a[i+1]++;
		}
		ans.push_back(temp);
	}
	reverse(ans.begin(), ans.end());
	while(ans[0] == '0')
		ans.erase(0, 1);
	return ans;
}

string sum_5(string a, string b) {
	for (int i = 0; i < a.size(); ++i)
		if(a[i] == '6')
			a[i] = '5';
	for (int i = 0; i < b.size(); ++i)
		if(b[i] == '6')
			b[i] = '5';
	return Plus(a, b);
}

string sum_6(string a, string b) {
	for (int i = 0; i < a.size(); ++i)
		if(a[i] == '5')
			a[i] = '6';
	for (int i = 0; i < b.size(); ++i)
		if(b[i] == '5')
			b[i] = '6';
	return Plus(a, b);
}

void Solve() {
	cout << sum_5(a, b) << " " << sum_6(a, b) << endl;
}

int main() {
	faster();
	tester() {
		Input();
		Solve();
	}
	return 0;
}
