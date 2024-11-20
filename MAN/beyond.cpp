#include <cstdio>

struct beyond {
	int a, b;
};

beyond x, y;

int main() {
	x.a = 20;
	x.b = 40;
	
	y.a = 60;
	y.b = 80;
	printf("x.a = %d , x.b = %d\n", x.a, x.b);
	printf("y.a = %d , y.b = %d", y.a, y.b);
}
