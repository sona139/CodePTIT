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

string number;

void Input() {
    cin >> number;
}

void Solve() {
    int s = number.size();
    int i = s-2;
    while(i >= 0 && number[i] <= number[i+1])
        --i;
    if(i == -1) cout << -1;
    else {
        int j = s-1;
        while(number[i] <= number[j] || number[j] == number[j-1])
            --j;
        swap(number[i], number[j]);
        cout << number;
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
