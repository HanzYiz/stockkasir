#include <iostream>
using namespace std;

struct Stock{
    int mie = 0;
    int bakso = 0;
    int nasi = 0;
    int totalmakan;
};
Stock nilaistock;
Stock addstock(){

    Stock stock;
    while(true){
    int pilihan,addstock;
    cout <<"\n|======================================|\n";
    cout <<"|     silahkan pilih add stock anda    |\n";
    cout <<"|======================================|\n";
    cout <<"|    1. bakso                          |\n";
    cout <<"|    2. mie                            |\n";
    cout <<"|    3. nasi                           |\n";
    cout <<"|    4. Cek semua stock                |\n";
    cout <<"|    5. Balik ke menu utama            |\n";
    cout <<"|======================================|\n";
    cout <<"Masukan pilihan anda : ";
    cin >> pilihan;
    cout <<"\n";

    if (pilihan == 1){
        cout <<"Masukan jumlah yg ingin di tambah : ";
        cin >> addstock;
        nilaistock.bakso += addstock;
        cout <<"\n";
        cout <<"Stock baso saat ini : "<<nilaistock.bakso;
        }
    else if(pilihan == 2){
        cout <<"Masukan jumlah yang ingin di tambah :";
        cin >> addstock;
        nilaistock.mie += addstock;
        cout <<"\n";
        cout <<"Stock mie saat ini : "<<nilaistock.mie;
        cout <<"\n";
        }
    else if (pilihan == 3){
        cout <<"masukan jumlah yang ingin di tambah :";
        cin >> addstock;
        nilaistock.nasi += addstock;
        cout <<"\n";
        cout <<"Stock nasi saat ini : "<<nilaistock.nasi;
    }
    else if(pilihan == 4){
        cout <<"Semua stock\n";
        cout <<"1. Baso : "<<nilaistock.bakso <<endl;
        cout <<"2. Mie : "<<nilaistock.mie <<endl;
        cout <<"3. Nasi : "<<nilaistock.nasi <<endl;
        cout <<"\n";
        }
    else if(pilihan == 5){
        break;
        }
    else {
        cout <<"Maaf input salah! Silahkan masukan ulang.";
    }
  }
  return stock;
}   


Stock menumakanan(){
    Stock menumakanan;
    while(true){
        int pilihan, menumakan;
        string namamakan,nama;
        cout <<"Silahkan masukan nama anda terlebih dahulu : ";
        cin >> nama;
        cout <<endl;
        cout <<endl;
        cout <<"\n|======================================|\n";
        cout <<"|           Silahkan pilih menu        |\n";
        cout <<"|======================================|\n";
        cout <<"|       1. Nasi (Rp.3000)              |\n";
        cout <<"|       2. Baso (Rp.13000)             |\n";
        cout <<"|       3. Mie  (Rp.6000)              |\n";
        cout <<"|       4. exit                        |\n";
        cout <<"|======================================|\n";
        cout <<"Silahkan pilih menu (1/2/3) : ";
        cin >> pilihan;
        cout <<"\n";

        if (pilihan == 1){
            cout <<"Silahkan masukan pesanan anda : ";
            cin >> menumakan;
                if (menumakan > nilaistock.nasi){
                    cout <<"Maaf stok tidak cukup untuk memenuhi pesanan anda \n";
                }
                else {
                    nilaistock.nasi -= menumakan;
                    nilaistock.totalmakan = menumakan * 3000;
                    cout <<"Terima kasih telah membeli nasi \n";
                    cout <<"Total pembelian anda Rp."<<nilaistock.totalmakan;
                    namamakan = "Nasi";
                    cout <<"\n";
                }

             }
        else if (pilihan == 2){
            cout <<"Silahkan masukan pesanan anda : ";
            cin >> menumakan;
                if(menumakan > nilaistock.bakso){
                    cout <<"Maaf stok tidak cukup untuk memenuhi pesanan anda \n";
                }
                else{
                    nilaistock.bakso -= menumakan;
                    nilaistock.totalmakan = menumakan * 13000;
                    cout <<"Terima kasih telah membeli\n";
                    cout <<"Total pembelian anda Rp."<<nilaistock.totalmakan;
                    namamakan = "Bakso";
                    cout <<"\n";
                }
            }
        else if (pilihan == 3){
            cout <<"Silahkan masukan pesanan anda : ";
            cin >> menumakan;
                if (menumakan > nilaistock.mie){
                    cout <<"Maaf stok tidak cukup untuk memenuhi pesanan anda\n";
                }
                else{
                    nilaistock.mie -= menumakan;
                    nilaistock.totalmakan = menumakan * 6000;
                    cout <<"Terimakasih telah membeli\n";
                    cout <<"Total pembelian anda Rp."<<nilaistock.totalmakan;
                    namamakan = "mie";
                    cout <<"\n";
                }
            }
        else if(pilihan == 4){
            cout <<"Terimkasih sudah melihat menu toko farhan, semoga anda senang\n";
            break;
        }
        else{
            cout <<"Menu yang anda masukan tidak valid, silahkan pilih ulang\n";
            break;
        }

        cout <<"\n|====================================|\n";
        cout <<"    Struk Pesanan atas nama "<<nama<<"\n";
        cout <<"|====================================|\n";
        cout <<"|   Pesanan anda : "<<namamakan<<"\n";
        cout <<"|   Total porsi : "<<menumakan<<"\n";
        cout <<"|====================================|\n";
        cout <<"| Total yang harus di bayar Rp."<<nilaistock.totalmakan<<"\n";
        cout <<"|====================================|\n";
        cout <<"|            Terima kasih            |\n";
        cout <<"|====================================|\n";
        break;
    }
}


int main(){
    while(true){
    int pilihan;
    cout <<"\n|=================================================|\n";
    cout <<"|    Selamat datang di menu toko Farhan Maulana   |\n";
    cout <<"|=================================================|\n";
    cout <<"|         1. Add stock                            |\n";
    cout <<"|         2. Menu Makanan                         |\n";
    cout <<"|         3. Cek stock                            |\n";
    cout <<"|         4. Exit                                 |\n";
    cout <<"|=================================================|\n";
    cout <<"Masukan pilihan anda (1/2): ";
    cin >> pilihan;

    if (pilihan == 1){
        addstock();
        }

    else if (pilihan == 2){
        menumakanan();
        }
    else if(pilihan == 3){
        cout <<"stock baso saat ini : "<<nilaistock.bakso<<"\n";
        cout <<"stock mie saat ini : "<<nilaistock.mie<<"\n";
        cout <<"stock nasi saat ini : "<<nilaistock.nasi<<"\n";
    }
    else if (pilihan == 4){
        break;
    }
    else{
        cout <<"Pilihan anda tidak valid, silahkan pilih ulang\n";
        }
    }
}