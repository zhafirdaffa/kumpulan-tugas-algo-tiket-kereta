 #include <iostream>
#include <conio.h> 

using namespace std;

int main()
{
    int pil, jum;
    int hargaPerTiket; 
    int totalHarga = 0;
	double potongan; 

    cout << "*** Harga Tiket ***" << endl;
    cout << "1. Ekonomi" << endl;
    cout << "2. Bisnis" << endl;
    cout << "3. Eksekutif" << endl;

    cout << "Masukan Pilihan = ";
    cin >> pil;

    cout << "Masukkan jumlah tiket : ";
    cin >> jum;

    
    switch (pil)
    {
    case 1:
        hargaPerTiket = 100000 * jum;
        break;
    case 2:
        hargaPerTiket = 200000 * jum;
        break;
    case 3:
        hargaPerTiket = 300000 * jum;
        break;
    default:
        cout << "Pilihan anda salah" << endl;
        return 1; 
    }

    
    totalHarga =  hargaPerTiket;

    
    if (totalHarga >= 500000)
    {
       potongan = totalHarga * 10/100; 
    }
    else if (totalHarga >= 300000)
    {
      potongan = totalHarga * 5/100;
    }
    else if (totalHarga >= 200000)
    {
      potongan = totalHarga * 0/100;
    } else {
    	potongan = 0;
	}
    
    totalHarga -= potongan;
    
    cout << "Total harga yang harus dibayar: " << totalHarga << " ribu rupiah\n";

    return 0;
}