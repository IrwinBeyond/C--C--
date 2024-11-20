#include <iostream>
using namespace std;

int arr[] = {0,7,4,9,2,6,8,10,1,3,5};

void pii(int n) {
	if(n <= 10) {
		pii(n*2);
		cout << arr[n] << " ";
		pii(n*2+1);
	}
}

int main() {
	pii(1);
}
