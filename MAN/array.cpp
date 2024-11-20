#include <cstdio>

int main() {
	int N;
	
	printf("Masukkan jumlah nilai yang akan dimasukkan\n");
	scanf("%d", &N);
	int tabel[N];
	
	printf("Masukkan nilai yang akan dibalik sejumlah masukan\n");
	for (int i = 0; i < N; i++) {
		scanf("%d", &tabel[i]);
	}
	
	printf("Balik urutan nilai diatas\n");
	for (int i = N-1; i >= 0; i--) {
		printf("%d\n", tabel[i]);
	}
}
