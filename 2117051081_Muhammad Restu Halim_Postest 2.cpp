#include <iostream>
using namespace std;

int main (){
	float jumlah_bitcoin_dibeli, harga_pembelian, harga_saat_ini;
	
	cout << "                 BITCOIN 2            " << endl;
	cout << endl;
	cout << " Dibuat Oleh: Muhammad Restu Halim" << endl;
	cout << " Kelas B" << endl;
	cout << " NPM: 2117051081" << endl;
	cout << endl;
	
	//INPUT//
	cout << " Jumlah Bitcoin Dibeli    : "; cin >> jumlah_bitcoin_dibeli;
	cout << " Harga Pembelian          : "; cin >> harga_pembelian;
	cout << " Harga Saat Ini           : "; cin >> harga_saat_ini;
	
	cout << endl << endl;
	
	cout << "<<=======================================>>" << endl;
	cout << endl;
	
	//OUTPUT//
	cout << " Kenaikan/Penurunan    :" << (( harga_saat_ini-harga_pembelian) / harga_pembelian) * 100 << "%" << endl;
	cout << " Untung/Rugi           :" << (( harga_saat_ini-harga_pembelian) *jumlah_bitcoin_dibeli) / 1000000 << "juta" << endl;
	
	
	
}
