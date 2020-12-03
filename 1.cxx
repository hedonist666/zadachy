#include <iostream>
#include <map>
#include <functional>

using namespace std;

int main() {
    map<int, int, less<>> m;
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int t;
        cin >> t;
        if (t == 1) {
            int a, b;
            cin >> a >> b;
            if (!m[a]) m[a] = 0;
            m[a] += b;
        }
        else if (t == 2) {
            int s;
            cin >> s;
            int i = 0;
            for (auto e : m) {
                if (i < s) ++i;
                else cout << e.first << ' ';
            }
            cout << endl;
        }
    }
}
