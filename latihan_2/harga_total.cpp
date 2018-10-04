#include <iostream>

using namespace std;

int main(){
	int b;
	float harga,hasil;

	harga = 5203.02;

	cout<<"==== menghitung harga total barang ==== "<<endl;
	cout<<endl;	
	cout<<endl;

	cout<<"masukkan jumlah barang yang di beli ";
	cin>>b;
	cout<<endl;

	cout<<"harga satuan barang adalah "<<harga<<endl;
	cout<<endl;

	hasil = b*harga;

	cout<<"jumlah total harga barang adalah "<<hasil<<endl;

	cin.get();
	return 0;
}
