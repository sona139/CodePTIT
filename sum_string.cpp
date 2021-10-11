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

string number;
int s;

void Input() {
	cin >> number;
	s = number.size();
}

string sum(string a, string b) {
	if(a.size() < b.size())
		swap(a, b);
	int s1 = a.size(), s2 = b.size();
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());
	a.push_back('0');
	for (int i = s2; i <= s1; ++i)
		b.push_back('0');
	string ans;
	for (int i = 0; i <= s1; ++i) {
		char temp = a[i] + b[i] - '0';
		if(temp > '9') {
			temp -= 10;
			++a[i+1];
		}
		ans += temp;
	}
	reverse(ans.begin(), ans.end());
	if(ans[0] == '0')
		ans.erase(0, 1);
	return ans;
}

bool sumString(int begin, int s1, int s2) {
	string a = number.substr(begin, s1),
		   b = number.substr(begin + s1, s2);
	string c = sum(a, b);
	int s3 = c.size();
	if(begin + s1 + s2 + s3 > s)
		return false;
	string d = number.substr(begin + s1 + s2, s3);
	if(c == d) {
		if(begin + s1 + s2 + s3 == s)
			return true;
		return sumString(begin + s1, s2, s3);
	}
	return false;
}

bool checkSumString() {
	for (int i = 1; i < s; ++i)
		for (int j = 1; j < s - i; ++j)
			if(sumString(0, i, j))
				return true;
	return false;
}

void Solve() {
	checkSumString() ? cout << "Yes" : cout << "No";
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
