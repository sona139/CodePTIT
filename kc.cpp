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

struct point {
    db x, y;
};

struct point a, b;

void Input() {
    cin >> a.x >> a.y >> b.x >> b.y;    
}

db kc() {
    return 1.0*sqrt((a.x - b.x)*(a.x - b.x) + (a.y - b.y)*(a.y - b.y));
}

void Solve() {
    cout << setprecision(4) << fixed << kc() << endl; 
}

int main() {
    faster();
    tester() {
        Input();
        Solve();
    }
    return 0;
}
