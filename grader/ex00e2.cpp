#include <climits>
#include <iostream>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    int r, r1, c1, r2, c2;
    cin >> r;
    int arr[x][y];
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < r; i++) {
        cin >> r1 >> c1 >> r2 >> c2;
        if (r1 > r2 || c1 > c2) {
            cout << "INVALID\n";
        } else if (r1 > x || c1 > y) {
            cout << "OUTSIDE" << endl;
        } else {
            if (r2 > x)
                r2 = x;
            if (c2 > y)
                c2 = y;
            int localmax = arr[r1 - 1][c1 - 1];
            for (int i = r1 - 1; i < r2; i++) {
                for (int j = c1 - 1; j < c2; j++) {
                    if (arr[i][j] > localmax) {
                        localmax = arr[i][j];
                    }
                }
            }
            cout << localmax << "\n";
        }
    }
}
