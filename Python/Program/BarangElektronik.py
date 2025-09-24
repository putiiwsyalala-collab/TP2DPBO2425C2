from Produk import Produk

# class child dari Produk
class BarangElektronik(Produk):
    def __init__(self, kodeProduk, stok, harga,namaBarang, garansi, tahunRilis):
        super().__init__(kodeProduk, stok, harga)
        self.namaBarang = namaBarang
        self.garansi = garansi
        self.tahunRilis = tahunRilis

    def get_NamaBarang(self):
        return self.namaBarang

    def set_NamaBarang(self, namaBarang):
        self.namaBarang = namaBarang

    def get_garansi(self):
        return self.garansi

    def set_garansi(self, garansi):
        self.garansi = garansi

    def get_TahunRilis(self):
        return self.tahunRilis

    def set_TahunRilis(self, tahunRilis):
        self.tahunRilis = tahunRilis