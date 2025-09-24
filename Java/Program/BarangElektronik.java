public class BarangElektronik extends Produk {
    private String namaBarang;
    private int garansi;     
    private int tahunRilis;

    public BarangElektronik(String kodeBarang, String namaBarang, int garansi, int harga, int stok, int tahunRilis) {
        super(kodeBarang, harga, stok);
        this.namaBarang = namaBarang;
        this.garansi = garansi;
        this.tahunRilis = tahunRilis;
    }

    public String getNamaBarang() {
        return namaBarang;
    }

    public void setNamaBarang(String namaBarang) {
        this.namaBarang = namaBarang;
    }

    public int getGaransi() {
        return garansi;
    }

    public void setGaransi(int garansi) {
        this.garansi = garansi;
    }

    public int getTahunRilis() {
        return tahunRilis;
    }

    public void setTahunRilis(int tahunRilis) {
        this.tahunRilis = tahunRilis;
    }
}
