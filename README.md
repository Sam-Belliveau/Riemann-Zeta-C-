# Riemann Zeta Function Programed In C++

This is an app that I made that evaluates the zeta function in C++.

It may just show "1" for high numbers and you would know why if you are familiar with the zeta function.

If you are not check out https://en.wikipedia.org/wiki/Riemann_zeta_function.

If you just want the function here it is.

```
double zeta(double num) {
	long double out = 0;
	long double i = 1;
	long double calculation = 1;
	while (calculation > 1e-15) {
		calculation = (1 / pow(i, num));
		out += calculation;
		i++;
	}
	return out;
}
```
Fast gives results faster for numbers less than 3. Other than that it is the same as precision.

Precision is very slow for numbers less than 3. Other than that is gives better results

The compiled code for this will be included because this is a small program.

Overall, I hope I made a good calculator for all you math heads out there.
