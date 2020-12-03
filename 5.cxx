//postroit treugolnik
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
    double l1, l2, angle;
    cin >> l1 >> l2 >> angle;
    point p1 = {0, 0};
    point p2 = {l1, 0};
    point p3 = {l2*cos(angle*PI/180), l2*sin(angle*PI/180)};
    cout << fixed << setprecision(6);
    cout << p1 << '\n' << p2 << '\n' << p3 << endl;
}
