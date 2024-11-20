#include <cstdio>

int a, b;
double x, y;
long long c, d;

int main() {
	a = 100;
	b = a;
	printf("a : %d, b : %d\n", a, b);
	
	x = 3.1418;
	y = 234.432;
	printf("x %lf\n", x);
	printf("y %lf\n", y);
	
	c = 1234567890987654321;
	d = 246808642;
	printf("c : %I64d\n", c);
	printf("d : %I64d", d);
}
