#include <iostream>
#include <vector>

using namespace std;

int optimal_weight(int W, const vector<int> &w) {
	vector<vector<int>> values(w.size() + 1, vector<int>(W + 1));

	for (int i = 0; i <= W; i++) { 
        values[0][i] = 0; 
    }

	for (int i = 0; i <= w.size(); i++) { 
        values[i][0] = 0; 
    }

	for (int i = 1; i <= w.size(); i++) {
		for (int j = 1; j <= W; j++) {
			if (j >= w[i - 1]) {
				values[i][j] = max(w[i - 1] + values[i - 1][j - w[i - 1]],
								   values[i - 1][j]);
			} else {
				values[i][j] = values[i - 1][j];
			}
		}
	}

	return values[w.size()][W];
}

int main() {
	int n, W;
	cin >> W >> n;

	vector<int> w(n);

	for (int i = 0; i < n; i++) { 
        cin >> w[i]; 
    }
    
	cout << optimal_weight(W, w) << '\n';
}