#include <cstdio>

//subprogram
void gambar(int x) {
	if (x > 1000) {
		return;
	}
	for (int i = 0; i < x; i++) {
		printf ("*");
	}
	printf("\n");
}

//program utama
int main () {
	int x;
	
	scanf("%d", &x);
	for (int i = 1; i <= x; i++) {
		gambar(i);
	}
	for (int i = x-1; i >= 0; i--) {
		gambar(i);
	}
}
