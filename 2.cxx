//stack
#include <iostream>
#include <string>

using namespace std;

bool check(string s) {
    int type[] = {0, 0, 0}; //(), [], {}
    for (auto e : s) {
        if (e == '(') type[0]++;
        else if (e == '[') type[1]++;
        else if (e == '{') type[2]++;
        else if (e == ')') {
            if (!type[0]) return false;
            type[0]--;
        }
        else if (e == ']') {
            if (!type[1]) return false;
            type[1]--;
        } 
        else if (e == '}') {
            if (!type[2]) return false;
            type[2]--;
        }
    }
    return (!type[0]) && (!type[1]) && (!type[2]);
}

int main() {
    string s;
    cin >> s;
    cout << check(s);
}
