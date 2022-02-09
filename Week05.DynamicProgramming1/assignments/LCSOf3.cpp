#include <iostream>
#include <vector>

using namespace std;

int lcs3(vector<int> &a, vector<int> &b, vector<int> &c) {
	int seq[a.size() + 1][b.size() + 1][c.size() + 1];

	for (int i = 0; i <= a.size(); i++) {
		for (int j = 0; j <= b.size(); j++) {
			for (int k = 0; k <= c.size(); k++) { seq[i][j][k] = 0; }
		}
	}

	for (int i = 1; i <= a.size(); i++) {
		for (int j = 1; j <= b.size(); j++) {
			for (int k = 1; k <= c.size(); k++) {
				if (a[i - 1] == b[j - 1] and b[j - 1] == c[k - 1]) {
					seq[i][j][k] = 1 + seq[i - 1][j - 1][k - 1];
				} else {
					seq[i][j][k] =
						max(seq[i][j][k - 1], max(seq[i][j - 1][k], max(seq[i - 1][j][k], max(seq[i][j - 1][k - 1], max(seq[i - 1][j][k - 1], max(seq[i - 1][j - 1][k], seq[i - 1][j - 1][k - 1]))))));
				}
			}
		}
	}

	return seq[a.size()][b.size()][c.size()];
}

int main() {
	int an;
	cin >> an;

	vector<int> a(an);
	for (int i = 0; i < an; i++) { 
        cin >> a[i];
    }

	int bn;
	cin >> bn;

	vector<int> b(bn);
	for (int i = 0; i < bn; i++) { 
        cin >> b[i]; 
    }

	int cn;
	cin >> cn;

	vector<int> c(cn);
	for (int i = 0; i < cn; i++) { 
        cin >> c[i]; 
    }

	cout << lcs3(a, b, c) << "\n";

    return 0;
}