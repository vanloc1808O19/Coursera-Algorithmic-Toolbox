/**
 * The edit distance between two strings is the minimum number of operations (insertions, deletions, 
 * and substitutions of symbols) to transform one string into another. It is a measure of similarity 
 * of two strings. Edit distance has applications, for example, in computational biology, natural 
 * language processing, and spell checking. 
 * Your goal in this problem is to compute the edit distance between two strings.
*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int editDistance(string s1, string s2) {
    int dis[s1.length() + 1][s2.length() + 1];

    int idx = 0;

    while (idx <= s1.length()) {
        dis[idx][0] = idx;
        idx++;
    }

    idx = 1;

    while (idx <= s2.length()) {
        dis[0][idx] = idx;
        idx++;
    }

    for (int i = 1; i <= s1.length(); i++) {
        for (int j = 1; j <= s2.length(); j++) {
            if (s1[i - 1] != s2[j - 1]) {
                dis[i][j] = std::min(dis[i - 1][j - 1] + 1, std::min(dis[i - 1][j] + 1, dis[i][j - 1] + 1));
            } else {
                dis[i][j] = dis[i - 1][j - 1];
            }
        }
    }

    return dis[s1.length()][s2.length()];
}

int main() {
    string str1, str2;
    cin >> str1 >> str2;

    cout << editDistance(str1, str2) << "\n";

    return 0;
}