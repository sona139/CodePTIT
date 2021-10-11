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
}

void Solve() {
    int ans = 0, temp = 1;
    int s = a.size();
    for (int i = s-1; i >= 0; --i) {
        if(a[i] == '1') {
            temp %= 5;
            ans += temp;
            ans %= 5;
        }
        temp *= 2;
    }
    ans ? cout << "No" : cout << "Yes";
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
