#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Menu {
    string id;
    string name;
    string category;
    int price;
};

void showMenu (vector<Menu> daftar_menu) {
    cout << "-------- Daftar Menu -------" << endl;
    for (int i = 0; i < 15; i++) {
        cout << "ID Menu: " << daftar_menu[i].id << endl;
        cout << "Nama Menu: " << daftar_menu[i].name << endl;
        cout << "Kategori: " << daftar_menu[i].category << endl;
        cout << "Harga: " << daftar_menu[i].price << endl << endl;
    }
}

void riwayatPemesanan(string Nama_Pelanggan){
    cout << "-------- Riwayat Pembelian -------" << endl;
    cout << "Nama Pelanggan : " ;
    cout << Nama_Pelanggan << endl ;
    cout << "Menu yang dibeli : ";


}

int main ( ){
    vector<Menu> daftar_menu= {
        {"F1", "Pempek Adaan", "Makanan", 3000},
        {"F2", "Pempek Lenjer", "Makanan", 3000},
        {"F3", "Pempek Telur", "Makanan", 4000},
        {"F4", "Pempek Pepaya", "Makanan", 4000},
        {"F5", "Pempek Kapal Selam", "Makanan", 12000},
        {"F6", "Pempek Kulit", "Makanan", 5000},
        {"F7", "Pempek Crispy", "Makanan", 4000},
        {"F8", "Tekwan", "Makanan", 15000},
        {"F9", "Model Ikan", "Makanan", 15000},
        {"F10", "Model Gandum", "Makanan", 12000},
        {"D1", "Teh Tawar", "Minuman", 5000},
        {"D2", "Teh Manis", "Minuman", 6000},
        {"D3", "Es Jeruk", "Minuman", 8000},
        {"D4", "Es Kelapa Muda", "Minuman", 12000},
        {"D5", "Es Campur", "Minuman", 10000},
    } ;

    string Nama_Pelanggan;
    bool selesai = false;
    cout << "Nama Pelanggan : ";
    cin >> Nama_Pelanggan;

    while (selesai==false) {
        cout << "Selamat datang di Pempek Palembang" << endl;

        int Pilihan;
        cout << "1. Lihat Menu" << endl;
        cout << "2. Beli Menu" << endl;
        cout << "3. Keluar" << endl;
        cout << "Pilihan: ";
        cin >> Pilihan;

        int Jumlah_Menu;

        if (Pilihan == 1) {
            showMenu(daftar_menu);
        } 
        else if (Pilihan == 2) {
            string ID_menu;
            int jumlah;

            cout << "Masukkan ID menu yang ingin dibeli : ";
            cin >> ID_menu;
            cout << "Masukkan jumlah yang ingin dibeli : ";
            cin >> jumlah;

            bool menu_valid = false;
            int total_harga = 0;


            for (int i = 0; i < daftar_menu.size(); i++) {
                if (daftar_menu[i].id == ID_menu) {
                    menu_valid = true;
                    Jumlah_Menu ++ ;
                    total_harga = jumlah * daftar_menu[i].price;
                }
            }

            if (menu_valid==true){
                cout << "Total Harga : "<< endl ;
                cout << total_harga << endl << endl;
            }
            else {
                cout << "Menu Tidak Valid"<<endl;
            }
            
        }
        else {
            selesai=true;
            ;
        }
    }
}
