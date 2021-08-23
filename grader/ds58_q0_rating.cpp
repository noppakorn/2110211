#include <ios>
#include <iostream>
#include <map>
#include <iomanip>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    map<int,pair<double,int>> code_score;
    map<string,pair<double,int>> teach_score;
    for (int i = 0; i < n; ++i) {
        int code, score;
        string teach;
        cin >> code >> teach >> score;
        code_score[code].first += score;
        code_score[code].second += 1;
        teach_score[teach].first += score;
        teach_score[teach].second += 1;
    }
    for (auto it = code_score.begin(); it != code_score.end(); ++it) {
        cout << fixed << setprecision(2)  << it->first << " " << it->second.first / it->second.second << endl;

    }
    for (auto it = teach_score.begin(); it != teach_score.end(); ++it) {
        cout << fixed << setprecision(2)  << it->first << " " << it->second.first / it->second.second << endl;
    }
}
