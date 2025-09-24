from Produk import Produk
from BarangElektronik import BarangElektronik
from Handphone import Handphone
from tabulate import tabulate  

# fungsi shoe table
def tampilkan_tabel(list_hp):
    headers = ["Kode", "Stok", "Harga", "Nama", "Garansi",
               "Tahun Rilis", "Merek", "Warna", "RAM", "Storage"]
    table = []

    for hp in list_hp:
        table.append([
            hp.get_KodeProduk(),
            hp.get_stok(),
            hp.get_harga(),
            hp.get_NamaBarang(),
           str(hp.get_garansi()) + "tahun",
            hp.get_TahunRilis(),
            hp.get_merek(),
            hp.get_warna(),
            str(hp.get_ram()) + "GB",
            str(hp.get_storage()) +"GB"
        ])

    print(tabulate(table, headers=headers, tablefmt="grid"))



# Main Program
if __name__ == "__main__":
    # Data awal handphone
    list_hp = [
        Handphone(101, 10, 20000000, "iPhone_15", 1, 2023, "Apple", "Hitam", 8, 256),
        Handphone(102, 5, 15000000, "iPhone_16", 1, 2024, "Apple", "Putih", 8, 128),
        Handphone(103, 6, 19000000, "Samsung_S25_Ultra", 1, 2025, "Samsung", "Biru", 12, 256),
        Handphone(104, 4, 8000000, "Samsung_S24_FE", 1, 2024, "Samsung", "Hitam", 8, 256),
        Handphone(105, 3, 26000000, "Samsung_Z_Fold6", 2, 2024, "Samsung", "Silver", 12, 512)
    ]

    pilihan = 0
    while pilihan != 3:
     
        print("1. Add Data")
        print("2. Show Table")
        print("3. Exit")
        pilihan = int(input("Pilih: "))

        if pilihan == 1:
            # Input data baru
            print("Input data (kode stok harga nama garansi tahunRilis merek warna ram storage):")
            data = input().split()
            kode, stok, harga = int(data[0]), int(data[1]), int(data[2])
            nama, garansi, tahun, merek, warna = data[3], int(data[4]), int(data[5]), data[6], data[7]
            ram, storage = int(data[8]), int(data[9])

            list_hp.append(Handphone(kode, stok, harga, nama, garansi, tahun, merek, warna, ram, storage))
            print("Data berhasil ditambah!")

        elif pilihan == 2:
            # Tampilkan tabel
            tampilkan_tabel(list_hp)

        elif pilihan == 3:
            # Keluar program
            print("exit program")

        else:
            # Kalau input salah(bukan 1,2 dan 3)
            print("Pilihan tidak valid!")