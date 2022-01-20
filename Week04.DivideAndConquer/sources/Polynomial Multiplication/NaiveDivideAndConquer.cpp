//Multiply two polynomials
//a[n-1] * x^(n - 1) + a[n-2] * x^(n - 2) + ... + a[0]
//b[n-1] * x^(n - 1) + b[n-2] * x^(n - 2) + ... + b[0]
//coefficients can be zero so that two polynomials will have the same degree
//moreover, they are zero when there is no element at that position, for example,
//5x^2 + 1 = 5x^2 + 0x + 1
//output: c[2n - 2] * x^(2n - 2) + c[2n - 3] * x^(2n - 3) + ... + c[0]

//Let A(x) = D1(x)*x^(n / 2) + D0(x) where
//D1(x) = a[n - 1]*x^(n/2 - 1) + a[n - 2]*x^(n/2 - 2) + ... + a[n/2]
//D0(x) = a[n/2 - 1]*x^(n/2 - 1) + a[n/2 - 2]*x^(n/2 - 2) + ... + a[0]
//Let B(x) = E1(x)*x^(n / 2) + E0(x) where
//E1(x) = b[n - 1]*x^(n/2 - 1) + b[n - 2]*x^(n/2 - 2) + ... + b[n/2]
//E0(x) = b[n/2 - 1]*x^(n/2 - 1) + b[n/2 - 2]*x^(n/2 - 2) + ... + b[0]

//AB = (D1(x)*x^(n / 2) + D0(x)) * (E1(x)*x^(n / 2) + E0(x))
//= D1E1 + (D1E0 + D0E1)x^(n / 2) + D0E0