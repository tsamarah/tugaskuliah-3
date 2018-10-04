#include <iostream>
#include <string>
using namespace std;

int main(){
	float nilai1, nilai2;
	string  a;

	cout<<"==== operasi hitung dua bilangan ===="<<endl;
	cout<<endl;
	//inisialisasi nilai satu
	cout<<"masukkan nilai pertama ";
	cin>>nilai1;
	cout<<endl;
	//pilih operasi hitung
	cout<<"==pilih operasi hitung di bawah=="<<endl;
	cout<<endl;
	cout<<"tambah"<<endl;
	cout<<"kurang"<<endl;
	cout<<"kali"<<endl;
	cout<<"bagi"<<endl;
	cout<<endl;
	cout<<"masukkan operasi hitung ";
	cin>>a;
	//inisialisasi nilai dua
	cout<<"masukkan nilai kedua ";
	cin>>nilai2;
	
	if(a=="tambah")
		cout<<"hasilnya adalah "<<nilai1+nilai2<<endl;
	else if(a=="kurang")
		cout<<"hasilnya adalah "<<nilai1 - nilai2<<endl;
	else if(a=="kali")
		cout<<"hasilnya adalah "<<nilai1 * nilai2<<endl;
	else if(a=="bagi")
		cout<<"hasilnya adalah "<<nilai1 / nilai2<<endl;
	else
		cout<<"maaf operasi yang anda masukkan tidak ada";

}
