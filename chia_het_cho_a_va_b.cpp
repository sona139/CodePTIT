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

int n, m, a, b;

void Input() {
    cin >> n >> m >> a >> b;
}

int LCM(int a, int b) {
    while(b) {
        int temp = a%b;
        a = b;
        b = temp;
    }
    return a;
}

int GCD() {
    return a/LCM(a, b)*b;
}

void Solve() {
    int l, r, ans = 0;
    if(n%a == 0)
        l = n/a;
    else l = n/a + 1;
    r = m/a;
    if(r >= l) ans += r - l + 1;
    if(n%b == 0)
        l = n/b;
    else l = n/b + 1;
    r = m/b;
    if(r >= l) ans += r - l + 1;
    int temp = GCD();
    if(n%temp == 0)
        l = n/temp;
    else l = n/temp + 1;
    r = m/temp;
    if(r >= l) ans -= (r - l + 1);
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
