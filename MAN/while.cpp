#include <cstdio>

int main() {
	//bagian deklarasi
	int N;
	
	scanf("%d", &N);
	
	int i = 5;
	do {
		printf("tulisan ini dicetak saat i = %d\n", i);
		i++;
	} while (i<N);
	printf("akhir dari program\n");
}
