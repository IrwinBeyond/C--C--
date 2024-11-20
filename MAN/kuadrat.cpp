#include <cstdio>

int a, b, c, x, hasil;

int main() {
	printf("~Persamaan Kuadrat~\n");
	printf("\n");
	
	printf("Masukkan nilai a : ");
	scanf("%d", &a);
	
	printf("Masukkan nilai b : ");
	scanf("%d", &b);
	
	printf("Masukkan nilai c : ");
	scanf("%d", &c);
	
	printf("Masukkan nilai x : ");
	scanf("%d", &x);
	
	hasil = a*x*x + b*x +c;
	printf("ax^2 + bx + c = %d\n", hasil);
}
