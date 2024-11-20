#include <cstdio>
#include <string>

using namespace std;

char halo[1001];

int main() {
	scanf("%[^\n]", halo);
	
	string satu = halo;
	printf("nama='%s'\n", satu.c_str());
}
