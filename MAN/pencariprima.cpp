#include <cstdio>

//subprogram
bool prima(int x) {
	if (x < 2) {
		return false;
	}
	for (int i = 2; i*i <= x; i++) {
		if (x % i == 0) {
			return false;
		}
	}
	return true;
}

//program utama
int main() {
	int x;
	
	printf("masukkan nilai : ");
	scanf("%d", &x);
	prima(x);
	if (prima(x) == true) {
		printf("ini prima");
	}
	else {
		printf("ini bukan prima");
	}
}
