#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int a[100], m[100] = {0}, s = 0;
    while(cin >> a[s])
        ++m[a[s++]];
    for (int i = 0; i < s; ++i)
        if(m[a[i]]) {
            cout << a[i] << " " << m[a[i]] << endl;
            m[a[i]] = 0;
        }
    return 0;
}