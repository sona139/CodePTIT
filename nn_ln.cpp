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

int m, s;

void Input() {
    cin >> m >> s;
}

string mn(int m, int s) {
    string Min;
    while(s > 9) {
        Min.push_back('9');
        s -= 9;
        --m;
    }
    if(m == 1) {
        char x = s + '0';
        Min.push_back(x);
    }
    else {
        char x = s + '0' - 1;
        Min.push_back(x);
        --m;
        while(m > 1) {
            Min.push_back('0');
            --m;
        }
        Min.push_back('1');
    }
    reverse(Min.begin(), Min.end());
    return Min;
}

string mx(int m, int s) {
    string Max;
    while(s >= 9) {
        Max.push_back('9');
        --m;
        s -= 9;
    }
    if(s) {
        char x = s + '0';
        Max.push_back(x);
        --m;
    }
    while(m) {
        Max.push_back('0');
        --m;
    }
    return Max;
}

void Solve() {
    if(m*9 < s || s == 0 && m > 1) cout << "-1 -1";
    else cout << mn(m, s) << " " << mx(m, s);
    cout << endl;
}

int main() {
    faster();
    Input();
    Solve();
    return 0;
}
