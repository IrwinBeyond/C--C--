#include <cstdio>
#include <cstring>

char s[1001];
char t[1001];

int main() {
	scanf("%s %s", s, t);
	int cmp = strcmp(s, t);
	
	if (cmp > 0) {
		printf("%s lebih panjang dari %s", s, t);
	}
	else if (cmp < 0) {
		printf("%s lebih pendek dari %s", s, t);
	}
	else {
		printf("%s sama dengan %s", s, t);
	}
}
