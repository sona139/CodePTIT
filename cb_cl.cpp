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

void Input() {
    cin >> n;
}

bool ok(int a) {
    int l = 0, c = 0;
    while(a) {
        int temp = a%10;
        a /= 10;
        if(temp%2)
            ++l;
        else ++c;
    }
    return l == c;
}

void Solve() {
    int l = pow(10, n-1);
    int r = pow(10, n);
    int count = 0;
    for (int i = l; i < r; ++i) {
        if(ok(i)) {
            cout << i << " ";
            ++count;
        }
        if(count%10 == 0)
            cout << endl;
    }
}

int main() {
    faster();
    Input();
    Solve();
    return 0;
}
