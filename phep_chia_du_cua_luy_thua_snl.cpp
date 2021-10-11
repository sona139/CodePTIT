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
ll k, m;

void Input() {
    cin >>  a >> k >> m;
}

ll mul(ll a, ll k) {
    if(a == 1 || k == 0)
        return 1%m;
    ll temp = mul(a, k/2);
    if(k%2) return temp%m*temp%m*a%m;
    return temp%m*temp%m;
}

void Solve() {
    ll b = 0;
    int s = a.size();
    for (int i = 0; i < s; ++i) {
        b *= 10;
        b += a[i] - '0';
        b %= m;
    }
    cout << mul(b, k) << endl;
}

int main() {
    faster();
    tester() {
        Input();
        Solve();
    }
    return 0;
}
