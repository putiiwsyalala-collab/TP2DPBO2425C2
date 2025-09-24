#include <iostream>
#include <vector>
#include <iomanip>
#include "Handphone.cpp"

using namespace std;

// fungsi menampilkan tabel
void tampilkanTabel(vector<Handphone>& listHp) {
    size_t wKode = 4, wStok = 4, wHarga = 5, wNama = 4, wGaransi = 7;
    size_t wTahun = 11, wMerek = 5, wWarna = 5, wRam = 3, wStorage = 7;

    for (auto &hp : listHp) {
        wKode    = max(wKode, to_string(hp.getKodeProduk()).size());
        wStok    = max(wStok, to_string(hp.getStok()).size());
        wHarga   = max(wHarga, to_string(hp.getHarga()).size());
        wNama    = max(wNama, hp.getNamaBarang().size());
        wGaransi = max(wGaransi, to_string(hp.getGaransi()).size());
        wTahun   = max(wTahun, to_string(hp.getTahunRilis()).size());
        wMerek   = max(wMerek, hp.getMerek().size());
        wWarna   = max(wWarna, hp.getWarna().size());
        wRam     = max(wRam, to_string(hp.getRam()).size());
        wStorage = max(wStorage, to_string(hp.getStorage()).size());
    }

    wKode += 2; wStok += 2; wHarga += 2; wNama += 2; wGaransi += 2;
    wTahun += 2; wMerek += 2; wWarna += 2; wRam += 2; wStorage += 2;

    auto line = [&]() {
        cout << "+";
        cout << string(wKode, '-') << "+";
        cout << string(wStok, '-') << "+";
        cout << string(wHarga, '-') << "+";
        cout << string(wNama, '-') << "+";
        cout << string(wGaransi, '-') << "+";
        cout << string(wTahun, '-') << "+";
        cout << string(wMerek, '-') << "+";
        cout << string(wWarna, '-') << "+";
        cout << string(wRam, '-') << "+";
        cout << string(wStorage, '-') << "+\n";
    };

    // header
    line();
    cout << "|"
         << setw(wKode) << left << "Kode" << "|"
         << setw(wStok) << left << "Stok" << "|"
         << setw(wHarga) << left << "Harga" << "|"
         << setw(wNama) << left << "Nama" << "|"
         << setw(wGaransi) << left << "Garansi" << "|"
         << setw(wTahun) << left << "Tahun Rilis" << "|"
         << setw(wMerek) << left << "Merek" << "|"
         << setw(wWarna) << left << "Warna" << "|"
         << setw(wRam) << left << "RAM" << "|"
         << setw(wStorage) << left << "Storage" << "|\n";
    line();

    for (auto &hp : listHp) {
        cout << "|"
             << setw(wKode) << left << hp.getKodeProduk() << "|"
             << setw(wStok) << left << hp.getStok() << "|"
             << setw(wHarga) << left << hp.getHarga() << "|"
             << setw(wNama) << left << hp.getNamaBarang() << "|"
             << setw(wGaransi) << left << hp.getGaransi() << "|"
             << setw(wTahun) << left << hp.getTahunRilis() << "|"
             << setw(wMerek) << left << hp.getMerek() << "|"
             << setw(wWarna) << left << hp.getWarna() << "|"
             << setw(wRam) << left << hp.getRam() << "|"
             << setw(wStorage) << left << hp.getStorage() << "|\n";
    }

    line();
}

int main() {
    vector<Handphone> listHp;

    // contoh data awal
    listHp.push_back(Handphone(101, 10, 20000000, "iPhone 15", 1, 2023, "Apple", "Hitam", 8, 256));
    listHp.push_back(Handphone(102, 5, 15000000, "iPhone 16", 1, 2024, "Apple", "Putih", 8, 128));
    listHp.push_back(Handphone(103, 6, 19000000, "Samsung S25 Ultra", 1, 2024, "Samsung", "Biru", 12, 256));
    listHp.push_back(Handphone(104, 4, 8000000, "Samsung S24 FE", 1, 2023, "Samsung", "Hitam", 8, 256));
    listHp.push_back(Handphone(105, 3, 26000000, "Samsung Z Fold6", 2, 2024, "Samsung", "Silver", 12, 512));

    int pilihan;
    do {
        cout << "1. Add Data\n";
        cout << "2. Show Table\n";
        cout << "3. Exit\n";
        cout << "Pilih: ";
        cin >> pilihan;

        if (pilihan == 1) {
            int kode, stok, harga, garansi, tahunRilis, ram, storage;
            string nama, merek, warna;

            cout << "Input data (kode stok harga nama garansi tahunRilis merek warna ram storage):\n";
            cin >> kode >> stok >> harga >> nama >> garansi >> tahunRilis >> merek >> warna >> ram >> storage;

            listHp.push_back(Handphone(kode, stok, harga, nama, garansi, tahunRilis, merek, warna, ram, storage));
            cout << "Data berhasil ditambah!\n";
        }
        else if (pilihan == 2) {
            tampilkanTabel(listHp);
        }
        else if (pilihan != 3) {
            cout << "Pilihan tidak valid!\n";
        }

    } while (pilihan != 3);

    return 0;
}
