#include <iostream>
#include <cmath>
using namespace std;
int main(){
//	
	string variabel_nama;
	string variabel_goldar;
	string variabel_beratbadan;
	float variabel_tinggibadan;
//	
	getline(cin,variabel_nama);
	cin>>variabel_goldar;
	cin>>variabel_beratbadan;
	cin>>variabel_tinggibadan;
//	
	cout<<"Nama              :"<<variabel_nama<<endl;
	cout<<"Golongan Darah    :"<<variabel_goldar<<endl;
	cout<<"Berat Badan       :"<<variabel_beratbadan<<" kg"<<endl;
	cout<<"Tinggi Badan      :"<<variabel_tinggibadan<<" cm"<<endl;
	cout<<"Berat Badan Ideal :"<<variabel_tinggibadan-100-(variabel_tinggibadan-100)*15/100<<" kg";
}
