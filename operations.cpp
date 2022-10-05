#include "operations.h"

int addition(int x, int y) {
	return x + y;
};

int subtraction(int x, int y) {
	return x - y;
};

int multiplication(int x, int y) {
	return x * y;
};

double division(int x, double y) {
	if (y != 0) {
		return x / y;
	}
	else {
		return 0;
	};
};

int power(int x, int y) {
	return pow(x, y);
};