#include <cstdio>

int main() {
	int N;
	scanf("%d", &N);
	
	int count = 0; //banyaknya prima yang sudah ditemukan
	int cur = 2; //nilai yang akan diperiksa keprimaannya
	
	while (count < N) {
		bool prima = true;
		for (int i = 2; i <= cur-1; i++) {
			if (cur % i == 0) {
				prima = false;
				break;
			}
		}
		if (prima) {
			//ditemukan prima!
			//cetak dan tambahkan prima yang sudah ditemukan
			printf("%d\n", cur);
			count++;
		}
		//entah ini prima atau bukan, lanjut untuk memeriksa bilangan berikutnya
		cur++;
	}
	//keluar dari while, dipastikan count = N
}
