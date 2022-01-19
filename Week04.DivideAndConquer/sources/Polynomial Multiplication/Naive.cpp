//Multiply two polynomials
//a[n-1] * x^(n - 1) + a[n-2] * x^(n - 2) + ... + a[0]
//b[n-1] * x^(n - 1) + b[n-2] * x^(n - 2) + ... + b[0]
//coefficients can be zero so that two polynomials will have the same degree
//moreover, they are zero when there is no element at that position, for example,
//5x^2 + 1 = 5x^2 + 0x + 1
//output: c[2n - 2] * x^(2n - 2) + c[2n - 3] * x^(2n - 3) + ... + c[0]

#include <iostream>
#include <vector>

using namespace std;

//Complexity: O(n^2)
vector<long long> polynomialMultiplication(vector<long long> a, vector<long long> b) {
    vector<long long> product(2 * a.size() - 1, 0);

    for (int i = 0; i < a.size(); i++) {
        for (int j = 0; j < b.size(); j++) {
            product[i + j] += a[i] * b[j];
        }
    }

    return product;
}

int main() {
    //input format: a b c
    //a + bx + cx^2

    int n;
    cin >> n;

    vector<long long> a(n);
    vector<long long> b(n);

    for (long long& x : a) {
        cin >> x;
    }    

    for (long long& x : b) {
        cin >> x;
    }

    vector<long long> product = polynomialMultiplication(a, b);

    for (long long& x : product) {
        cout << x << " ";
    }
    cout << "\n";

    return 0;
}