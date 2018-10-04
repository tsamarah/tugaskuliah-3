#include <iostream>

using namespace std;

int main(){
	float a,b,t,hasil;

	cout<<"====menghitung luas trapesium====";
	cout<<endl;
	cout<<endl;
	
	cout<<"masukkan panjang sisi atas ";
	cin>>a;
	cout<<endl;
	
	cout<<"masukkan panjang sisi bawah ";
	cin>>b;
	cout<<endl;
	
	cout<<"masukkan tinggi ";
	cin>>t;
	cout<<endl;
	
	hasil = (a + b)* (t/2);
	cout<<"hasil luas trapesium adalah "<<hasil<<endl;

	cin.get();
	return 0;


}
