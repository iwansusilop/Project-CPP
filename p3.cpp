#include <string>
#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	int pilih, jumlah, totalBuku, hasil=0;
	char pilihanBuku, yesNo; 
	int diskon=10;
	int x=0;
	int TotalAkhirBuku[x];
	string namaAdmin;
	
	cout<<"Masukkan Nama Admin: ";
	cin>>namaAdmin;
	
	cout<<"==================="<<endl;
	cout<<namaAdmin<<endl;
	cout<<"==================="<<endl;
	
	cout<<endl;
	const string Toko = "Gramedia Authorized";
	cout<<"Selamat Datang Di "<<Toko;
	cout<<endl<<endl;
	
	cout<<"Menu Buku Penerbit Gramedia Pustaka Utama"<<endl;
	cout<<"1. Best Seller"<<endl;
	cout<<"2. Fiction"<<endl;
	cout<<"3. Non Fiction"<<endl<<endl; 
	
	cout<<"Masukkan Menu Buku Yang Dipilih: ";
	cin>>pilih;
		
	switch(pilih){
		case 1:
	cout<<"List Buku Best Seller"<<endl;
	cout<<"A. Komen Minor - Tere Liye			: Rp95.000"<<endl<<endl;
	
	cout<<"Masukkan Pilihan Buku: ";
	cin>>pilihanBuku;
	
	if (pilihanBuku == 'A' || pilihanBuku == 'a'){
		totalBuku=95000;
		
	cout<<"Harga Buku: "<<totalBuku;
	}
	break;
	
	case 2:
	cout<<"List Buku Fiction";
	break;
	
	case 3:
	cout<<"List Buku Non Fiction";
	}
	
	return 0;
}
