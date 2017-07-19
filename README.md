# Riemann Zeta Function Programed In C++

This is an app that I made that evaluates the zeta function in C++.

It may just show "1" for high numbers and you would know why if you are familiar with the zeta function.

If you are not check out https://en.wikipedia.org/wiki/Riemann_zeta_function.

If you just want the function here it is.

'''
double zeta(double num) {
	double out = 0;
	const double iterations = 100000000;
	double i = 1;
	while (i <= iterations) {
		out += (1/pow(i, num));
		i++;
	}
	return out;
}
'''
