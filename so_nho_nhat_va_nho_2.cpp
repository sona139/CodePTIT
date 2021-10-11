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

int n, min1, min2, ip;

void Input() {
    min1 = in; min2 = in;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> ip;
        if(ip < min1) {
            min2 = min1;
            min1 = ip;
        }
        else if(ip > min1) 
            min2 = min(min2, ip);
    }
}

void Solve() {
    if(min2 == in)
        cout << -1;
    else cout << min1 << " " << min2;
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
