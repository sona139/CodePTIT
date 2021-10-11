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
const int nMax = 1e6 + 1;

int n, x, ip;
map <int, int> a;

void Input() {
    cin >> n >> x;
    for (int i = 1; i <= n; ++i) {
        cin >> ip;
        a.insert(mp(ip, i));
    }    
}
void Solve() {
    if(a.find(x) == a.end())
        cout << -1;
    else cout << a[x];
    a.clear();
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
