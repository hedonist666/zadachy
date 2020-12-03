//postroit kvadrat - 2
#include <iostream>
#include <string>
#include <utility>

using namespace std;
using point = pair<double, double>;

#define x first
#define y second

istream& operator>>(istream& is, point& p) {
    int x, y;
    is >> x >> y;
    p = {x, y};
    return is;
}

ostream& operator<<(ostream& os, point& p) {
    os << p.first << ' ' << p.second;
    return os;
}


int main() {
    point p1, p2;
    cin >> p1 >> p2;
    if (p1.x > p2.x) swap(p1, p2);
    point m = {p2.x - p1.x, p2.y - p1.y};
    point p3 = {m.x/2 - m.y/2 + p1.x, m.x/2 + m.y/2 + p1.y};
    point p4 = {m.x/2 + m.y/2 + p1.x, -m.x/2 + m.y/2 + p1.y};
    cout << p3 << endl << p4 << endl; 
}
