#include "main.h"

int numberCounter(char* str, int n) {
	if (n <= 0) {
		return 0;
	}
	return (isdigit(str[n]) ? 1 : 0) + numberCounter(str, n - 1);
}