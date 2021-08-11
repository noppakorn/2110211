#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int h, m, d;
    cin >> h >> m >> d;
    m += d;
    if (m >= 60) {
        h += (m / 60);
        m %= 60;
    }
    h %= 24;
    cout << setw(2) << setfill('0') << h << " " << setw(2) << setfill('0') << m << "\n";
}

