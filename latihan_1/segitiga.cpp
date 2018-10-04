#include <iostream>

using namespace std;

int main(){
	float a,t,hasil;

	cout<<"======menghitung luas segitiga======";
	cout<<endl;
	cout<<endl;
	//alas
	cout<<"masukkan panjang alas ";
	cin>>a;
	//tinggi
	cout<<"masukkan tinggi ";
	cin>>t;
	//hasil
	hasil = (a/2) *t;
	cout<<"luas segitiga dengan alas "<<a<<" dan tinggi "<<t<<" adala "<<hasil<<endl;

	cin.get();
	return 0;


}
