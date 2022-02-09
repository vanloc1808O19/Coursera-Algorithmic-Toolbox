#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int lcsOf2(vector<int> &a, vector<int> &b) {
	int seq[a.size() + 1][b.size() + 1];

	int index = 0;

	while (index <= a.size()) {
		seq[index][0] = 0;
		index++;
	}

	index = 1;

	while (index <= b.size()) {
		seq[0][index] = 0;
		index++;
	}
    
	for (int i = 1; i <= a.size(); i++) {
		for (int j = 1; j <= b.size(); j++) {
			if (a.at(i - 1) == b.at(j - 1)) {
				seq[i][j] = 1 + seq[i - 1][j - 1];
			} else {
				seq[i][j] = std::max(seq[i - 1][j], seq[i][j - 1]);
			}
		}
	}
	return seq[a.size()][b.size()];
}

int main() {
	int n;
	cin >> n;

	vector<int> a(n);

	for (size_t i = 0; i < n; i++) { 
        cin >> a[i];
    }

    int m;
	cin >> m;

	vector<int> b(m);

	for (int i = 0; i < m; i++) { 
        cin >> b[i];
    }

	cout << lcsOf2(a, b) << "\n";

    return 0;
}