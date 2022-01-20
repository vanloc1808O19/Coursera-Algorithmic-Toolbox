//A(x) = a1x + a0
//B(x) = b1x + b0
//C(x) = a1b1x^2 + (a1b0 + a0b1)x + a0b0
//Rewrite as:
//C(x) = a1b1x^2 + ((a1 + a0)(b1 + b0) - a1b1 - a0b1)x + a0b0
//to reduce the number of multiplications
//Example:
//A(x) = 4x^3 + 3x^2 + 2x + 1
//B(x) = x^3 + 2x^2 + 3x + 4
//D1(x) = 4x + 3, D0(x) = 2x + 1
//E1(x) = x + 2, E0(x) = 3x + 4
//D1E1 = 4x^2 + 11x + 6, D0E0 = 6x^2 + 11x + 4
//(D1 + D0)(E1 + E0) = (6x + 4)(4x + 6) = 24x^2 + 52x + 24
//AB = (4x^2 + 11x + 6)x^4 + (24x^2 + 52x + 24 - (4x^2 + 11x + 6) - (6x^2 + 11x + 4))x^2 + 6x^2 + 11x + 4
//= 4x^6 + 11x^5 + 20x^4 + 30x^3 + 20x^2 + 11x + 4