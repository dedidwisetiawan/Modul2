#include <iostream>
using namespace std;

int main(){
double
luas(42),jumlah_box(22.3885),luas_box(1.87596),biaya_parket(11194.3),biaya_pasang,total_biaya(12034.3);
	cout<<"Masukan Luas Rumah(m2)\t:";
	cin>>luas;
	cout<<"Luas Rumah\t\t:"<<luas<<"m2/n";
	luas_box=1.87596;
	jumlah_box=luas/luas_box;
	cout<<"Luas 1 box parket\t:"<<luas_box<<"m2\n";
	cout<<"Jumlah box parket\t:"<<jumlah_box<<"\n";
	biaya_parket=500*jumlah_box;
	cout<<"Biaya parket(Rp)\t:"<<biaya_parket<<"\n";
	biaya_pasang=luas*20;
}
