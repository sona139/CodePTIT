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
ll fibo[1001];

void fibo_() {
    fibo[0] = 0;
    fibo[1] = 1;
    for (int i = 2; i <= 1000; ++i) {
        fibo[i] = fibo[i-1] + fibo[i-2];
        fibo[i] %= Mod;
    }
}

void Input() {
    cin >> n;
}

void Solve() {
    cout << fibo[n] << endl;
}

int main() {
    faster();
    fibo_();
    tester() {
        Input();
        Solve();
    }
    return 0;
}
