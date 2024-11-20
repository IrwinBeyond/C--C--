#include <bits/stdc++.h>
using namespace std;

int data[] = {9,3,4,7,2,3,9,3,1,8};

void ss(int N) {
	for(int i = 0; i<N-1; i++) {
		int _min = data[i];
		int ind_min = i;
		
		for(int j=i; j<N; j++) {
			if(data[j] < _min) {
				_min = data[j];
				ind_min = j;
			}
		}
		swap(data[i], data[ind_min]);
		cout<<data[i]<<" ";
	}
	cout<<data[N-1]<<endl;
}
void getM(int N) {
	int mo[10];
	memset(mo, 0, sizeof(mo));
	
	for(int i=0; i<N; i++) {
		mo[data[i]]++;
	}
	int mi=0;
	for(int i=0; i<N; i++) {
		if(mo[i]>mi) {
			mi=i;
		}
	}
	cout<<mi<<endl;
}
int main() {
	ss(10);
	getM(10);
}
