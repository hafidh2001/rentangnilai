#include <iostream>

using namespace std ;

int main() {
	
	system (" HAFIDH AHMAD FAUZAN ") ;
	cout << "NAMA  : HAFIDH AHMAD FAUZAN\n" ;
	cout << "NIM   : 19051397027\n " ;
	cout << "PRODI : D4 MANAJEMEN INFORMATIKA" ;
	
	
	//nilai yang akan di masukkan
	float tugas, partisipasi, uts, uas, rata ;
	
	string nama, nim, prodi ;
	cout << " Nama  = " ;
	cin >> nama ;
	cout << " NIM   = " ;
	cin >> nim ;
	cout << " Prodi = " ;
	cin >> prodi ;
	
	
	cout << " Masukkan Nilai Tugas = " ;
	cin >> tugas ; 
	cout << " Masukkan Nilai Partisipasi = " ;
	cin >> partisipasi ;
	cout << " Masukkan Nilai UTS = " ;
	cin >> uts ;
	cout << " Masukkan Nilai UAS = " ;
	cin >> uas ;

	//rumus
	rata = ( tugas + partisipasi + uts + uas ) / 4 ;
	
	//hasil
	if ( 80 <= rata && rata <= 100 ) {
		cout << " Grade A " ;
	}
	
	else if ( 60 <= rata && rata <= 79 ) {
		cout << " Grade B " ;
	}
	
	else if ( 40 <= rata && rata <= 59 ) {
		cout << " Grade C " ;
		
	}
	
	else if ( 20 <= rata && rata <= 39 ) {
		cout << " Grade D " ;
	}
	
	else if ( 0 <= rata && rata <= 19 ) {
		cout << " Grade E " ;
	}
	
	return 0;
}
