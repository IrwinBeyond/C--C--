#include <cstdio>

int main () {
	int i,j,k,N;
	scanf("%d", &N);
	
	//perulangan mencetak sebanyak N baris
	for (i=1; i<=N; i++) {
		//for pertama mencetak spasi
		for (j=N; j>i; j--) {
			printf(" ");
		}
		//for kedua mencetak bintang
		for (k=1; k<=i; k++) {
			printf("*");
		}
		printf("\n");
	}
}
