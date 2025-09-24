from BarangElektronik import BarangElektronik

class Handphone(BarangElektronik):
    def __init__(self, kodeProduk, stok, harga, namaBarang, garansi, tahunRilis, merek, warna,
                 ram, storage):
        super().__init__(kodeProduk, stok, harga, namaBarang, garansi, tahunRilis)
        self.merek = merek
        self.warna = warna
        self.ram = ram
        self.storage = storage

    def get_merek(self):
        return self.merek

    def set_merek(self, merek):
        self.merek = merek

    def get_warna(self):
        return self.warna

    def set_warna(self, warna):
        self.warna = warna

    def get_ram(self):
        return self.ram

    def set_ram(self, ram):
        self.ram = ram

    def get_storage(self):
        return self.storage

    def set_storage(self, storage):
        self.storage = storage
