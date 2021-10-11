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

ll a, b, c, n;

void Input() {
    cin >> a >> b >> c >> n;
}

ll GCD(ll a, ll b) {
    while(b) {
        ll temp = a%b;
        a = b;
        b = temp;
    }
    return a;
}

ll LCM(ll a, ll b) {
    return a/GCD(a, b)*b;
}

void Solve() {
    ll lcm = LCM(a, LCM(b, c));
    n = pow(10, n - 1);
    if(n%lcm == 0)
        cout << n;
    else {
        ll temp = n/lcm;
        ll ans = lcm*(temp + 1);
        if(ans >= n*10)
            cout << -1;
        else cout << ans;
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
