//postroit treugolnik - 2
#include <iostream>
#include <string>
#include <utility>
#include <cmath>
#include <iomanip>

using namespace std;
using point = pair<double, double>;

#define x first
#define y second

#define PI 3.14159265

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
    double l, a1, a2;
    cin >> l >> a1 >> a2;
    point p1 = {0, 0};
    point p2 = {l, 0};
    double a3 = 180 - a1 - a2;
    double l1 = sin(a2 * PI/180) * l / sin(a3 * PI/180);
    point p3 = {l1*cos(a1 * PI/180), l1*sin(a1 * PI/180)};
    cout << fixed << setprecision(6);
    cout << p1 << '\n' << p2 << '\n' << p3 << endl;
}
