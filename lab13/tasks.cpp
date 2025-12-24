#include "main.h"

// Задание 1
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


// Задание 2
int numberCounter(char* str, int n) {
	if (n <= 0) {
		return 0;
	}
	return (isdigit(str[n]) ? 1 : 0) + numberCounter(str, n - 1);
}

// Задание 3
double maxR(double* array, unsigned start, unsigned end) {
	if (start == end) {
		return array[start];
	}

	double max1 = maxR(array, start, (end + start) / 2);
	double max2 = maxR(array, ((end + start) / 2) + 1, end);

	return max1 > max2 ? max1 : max2;
}