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
string a;

void Input() {
    cin >> n >> a;
}

bool cmp(char a, char b) {
    return a > b;
}

void Solve() {
    string ans;
    for (int i = 0; i < n; ++i)
        switch(a[i]) {
            case '2':
                ans += '2';
                break;
            case '3':
                ans += '3';
                break;
            case '4':
                ans += "322";
                break;
            case '5':
                ans += '5';
                break;
            case '6':
                ans += "53";
                break;
            case '7':
                ans += '7';
                break;
            case '8':
                ans += "7222";
                break;
            case '9':
                ans += "7332";
                break;
        }
    sort(ans.begin(), ans.end(), greater<char>());
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
