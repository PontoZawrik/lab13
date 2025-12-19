#include "main.h"

int Akkerman(int m, int n) {
	if (m < 0) {
		m = -m;
	}
	if (n < 0) {
		n = -n;
	}
	if (m == 0) {
		return n + 1;
	}

	if (m > 0) {
		if (n == 0) {
			Akkerman(m - 1, 1);
		}
		else if (n > 0) {
			Akkerman(m - 1, Akkerman(m, n - 1));
		}
	}
}