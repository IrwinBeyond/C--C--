#include <cstdio>

int main() {
	int N;
	printf("Masukkan jumlah bebek!");
	scanf("%d", &N);

	printf("Masukkan nilai-nilai bebek!");
	int nilai[N];
	for (int i = 0; i < N; i++) {
		scanf("%d", &nilai[i]);
	}
	
	int total = 0;
	for (int i = 0; i < N; i++) {
		total += nilai[i];
	}
	
	int lulus = 0;
	for (int i = 0; i < N; i++) {
		//Trik menghindari pembagian
		if (nilai[i]*N >= total) {
			lulus++;
		}
	}

	printf("Berikut adalah jumlah bebek yang lulus!");
	printf("%d", lulus);
}
