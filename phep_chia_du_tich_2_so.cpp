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

ll a, b, p;

void Input() {
    cin >> a >> b >> p;
}

ll mod(ll a, ll b) {
    if(b == 0)
        return 0;
    ll temp = mod(a, b/2);
    if(b%2 == 0)
        return temp%p*2%p;
    return (a + 2*temp)%p;
}

void Solve() {
    cout << mod(a, b) << endl;
}

int main() {
    faster();
    tester() {
        Input();
        Solve();
    }
    return 0;
}
