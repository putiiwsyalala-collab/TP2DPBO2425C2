
# class parent(produk)
class Produk:
    def __init__(self, kodeProduk, stok, harga):
        self.kodeProduk = kodeProduk
        self.stok = stok
        self.harga = harga

    # settet dan getter
    def get_KodeProduk(self):
        return self.kodeProduk

    def set_KodeProduk(self, kodeProduk):
        self.kodeProduk = kodeProduk

    def get_stok(self):
        return self.stok

    def set_stok(self, stok):
        self.stok = stok

    def get_harga(self):
        return self.harga

    def set_harga(self, harga):
        self.harga = harga
