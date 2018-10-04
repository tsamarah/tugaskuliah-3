#include <iostream>

using namespace std;

int main(){
	int i,n;

	cout<<"masukkan batas bilangan ganjil ";
	cin>>n;
	cout<<endl;

	for(i = 1;i <= n;i++){
		if(i%2!=0)
			cout<<i<<endl;	
	}
	
	


	cin.get();
	return 0;
}
