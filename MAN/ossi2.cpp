#include <bits/stdc++.h>
using namespace std;

int semangka(int apel, int jeruk) {
	if(apel == 0) {
		return jeruk;
	}
	else{
		return semangka(apel/2, apel+jeruk);
	}
}

int durian(int rambutan) {
	if(rambutan % 2 == 0) {
		return durian(rambutan-1);
	}
	else{
		int manis = rambutan / 2;
		int asem = manis * manis;
		
		return semangka(manis, asem);
	}
}

int main() {
	int buah;
	cin>>buah;
	
	cout<<durian(buah)<<endl;
}
