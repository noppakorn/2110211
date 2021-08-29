#include <iomanip>
#include <ios>
#include <iostream>
#include <map>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    map<int, pair<int, int>> code_score;
    map<string, pair<int, int>> teach_score;
    for (int i = 0; i < n; ++i) {
        int code, score;
        string teach;
        cin >> code >> teach >> score;
        code_score[code].first += score;
        code_score[code].second++;
        teach_score[teach].first += score;
        teach_score[teach].second++;
    }
    for (auto x : code_score) {
        cout << fixed << setprecision(2) << x.first << " "
             << (double)x.second.first / x.second.second << "\n";
    }
    for (auto x : teach_score) {
        cout << fixed << setprecision(2) << x.first << " "
             << (double)x.second.first / x.second.second << "\n";
    }
}
