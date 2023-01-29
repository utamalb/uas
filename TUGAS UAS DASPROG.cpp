#include <iostream>
#include <iomanip>
using namespace std;

void display(string display){
	cout << display << endl;
}
int main() {
	//untuk menampilkan fungsi void
	display ("---------------------------------");
	display ("|\tINDOAPRIL MARKET\t|");
	display ("---------------------------------");
	
	//Inisialisasi atau deklarasi variabel
	int jum_beli, bayar,diskon,jumlah[50], harga[50], sub_total[50];
	string nama_barang[50];
	float total;
	
	
	cout << "Masukan Jumlah Beli : ";
	cin >> jum_beli; //Pengguna memasukan jumlah beli
	
	for (int i=0; i<jum_beli;i++){
		cout << endl;
		cout << "Masukan Barang Ke-" << i+1 << endl;
		cout << endl;
		
		cout << "Nama Barang : ";
		cin >> nama_barang[i]; //Pengguna input nama barang disimpan pada array nama_barang
		
		cout << "Jumlah      : ";
		cin >> jumlah[i]; //Pengguna input jumlah disimpan pada array jumlah
		
		cout << "Harga       : ";
		cin >> harga[i]; //Pengguna input harga disimpan pada array harga
		
		sub_total[i]=jumlah[i]*harga[i]; // Menjumlahkan Harga sub total barang
		total+=sub_total[i]; //Menjumlahkan seluruh sub total barang
	}
	
	cout << endl;
	cout << "-------------------------------------------------" << endl;
	cout << "|\tSTRUK BELANJA INDOAPRIL MARKET\t\t|" << endl;
	cout << "-------------------------------------------------" << endl;
	cout << "No   Barang    Jumlah     Harga     Sub Total" << endl;
	for (int i=0;i<jum_beli;i++){
		cout << i+1 << setw(8) << nama_barang[i] << setw(10) << jumlah[i] << setw(12) << harga[i] << setw(12) << sub_total[i] << endl; //Menampilkan semua nilai array
	}
	cout << "---------------------------------------------------------" << endl;

	//Kondisi untuk menentukan diskon yang didapatkan berdasarkan total belanja
	if (total>=100000){
		diskon=0.06*total;
	} else if (total>=50000){
		diskon=0.04;
	}else if (total>=25000){
		diskon=0.02;
	}else {
		diskon=0;
	}
	
	//Menampilkan Keterangan
	cout << "Jumlah Bayar : Rp." <<total << endl;//Menampilkan jumlah bayar (belum termasuk diskon)
	cout << "Diskon       : Rp." << diskon << endl; //Menampilkan diskon
	cout << "Total Bayar  : Rp."<< total-diskon << endl;//Menampilkan total harga yang harus dibayar
	cout << "Bayar        : Rp.";
	cin >> bayar; // Input dari user untuk jumlah yang dibayar
	if (bayar < total){
		cout << "maaf uang anda kurang!"; // Menampilkan output jika uang kurang
	}else {
		cout << "Kembali      : Rp."<< (bayar-(total-diskon)) << endl; // Menampilkan uang kembali
	} 
	return 0;
}
