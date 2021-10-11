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

void Solve() {
    int count = 0;
    if(n%2 == 0) {
        while(n%2 == 0) {
            n /= 2;
            ++count;
        }
        cout << 2 << " " << count << endl;
        count = 0;
    }
    for (int i = 3; i <= sqrt(n); i += 2) {
        if(n%i == 0) {
            while(n%i == 0) {
                n /= i;
                ++count;
            }
            cout << i << " " << count << endl;
            count = 0;
        }
    }
    if(n > 1)
        cout << n << " " << 1 << endl;
}

int main() {
    faster();
    Input();
    Solve();
    return 0;
}
