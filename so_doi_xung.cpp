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
#define endl '\n';
const int Mod = 1e9 + 7;
const int nMax = 1e5 + 1;

string number;

void Input() {
	cin >> number;
}

bool chan(int cnt[]) {
	for (int i = 1; i < 10; ++i)
		if(cnt[i] && cnt[i]%2 == 0)
			return true;
	return false;
}

void Solve() {
	int cnt[11] = {0};
	for (int i = 0; i < number.size(); ++i)
		++cnt[number[i] - '0'];
	if(cnt[0] == number.size())
		cout << number;
	else {
		int Max = 10, l;
		if(chan(cnt))
			l = 0;
		else l = 1;
		for (int i = l; i < 10; ++i)
			if(cnt[Max] <= cnt[i] && cnt[i]%2)
				Max = i;
		for (int i = 0; i < 10; ++i)
			if(cnt[i]%2 && cnt[i] <= cnt[Max] && i != Max)
				cnt[i] = 0;
		string ans;
		for (int i = 9; i >= l; --i)
			for (int j = 0; j < cnt[i]/2; ++j)
				ans += to_string(i);
		string temp = ans;
		ans += to_string(Max);
		reverse(temp.begin(), temp.end());
		ans += temp;
		cout << ans;
	}
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
