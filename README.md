# Riemann Zeta Function Programed In C++

This is an app that I made that evaluates the zeta function in C++.

It may just show "1" for high numbers and you would know why if you are familiar with the zeta function.

If you are not check out https://en.wikipedia.org/wiki/Riemann_zeta_function.

If you just want the function here it is.

```
#include <math.h>

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
```
It is the fastest way I can think of and I chose 100,000,000 as the iteration number because that had the best accuracy to time ratio.

The compiled code for this will be included because this is a small program.

Overall, I hope I made a good calculator for all you math heads out there.
