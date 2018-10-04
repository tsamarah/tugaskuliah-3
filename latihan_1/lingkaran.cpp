#include <iostream>

using namespace std;

int main(){
	float r,hasil;
	const float pi = 3.14;

	cout<<"======menghitung luas lingkaran=======";
	cout<<endl;
	cout<<endl;
	cout<<"masukkan jari-jari ";
	cin>>r;
	hasil = pi *r *r;
	cout<<endl;
	cout<<"luas lingkaran dengan jari-jari "<<r<<" adalah "<<hasil<<endl;

	cin.get();
	return 0;

}
