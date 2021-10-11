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

bool check() {
    int count = 0;
    if(n%2 == 0) {
        ++count;
        n /= 2;
        if(n%2 == 0)
            return false;
    }
    int i = 3;
    while(i <= sqrt(n)) {
        if(n%i == 0) {
            ++count;
            if(count == 4 || n%(i*i) == 0)
                return false;
            n /= i;
        }
        i += 2;
    }
    if(n <= 1 && count == 3 || n > 1 && count == 2)
        return true;
    return false;    
}

void Solve() {
    check() ? cout << 1 : cout << 0;
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
