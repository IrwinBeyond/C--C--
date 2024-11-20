#include<iostream>
using namespace std;

int main(){
	int bebek,teman,bagi,sisa;
	cin>>bebek>>teman;
	
	bagi=bebek/teman;
	sisa=bebek%teman;
	
	cout<<"masing-masing "<<bagi<<"\n";
	cout<<"bersisa "<<sisa;
}
