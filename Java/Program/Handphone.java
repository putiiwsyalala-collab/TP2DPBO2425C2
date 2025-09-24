public class Handphone extends BarangElektronik {
    private String merek;
    private String warna;
    private int ram;
    private int storage;
    

    public Handphone(String kodeBarang, String namaBarang, int garansi, int harga, int stok, int tahunRilis,
                     String merek, String warna, int ram, int storage) {
        super(kodeBarang, namaBarang, garansi, harga, stok, tahunRilis);
        this.merek = merek;
        this.warna = warna;
        this.ram = ram;
        this.storage = storage;
    }

    public String getMerek() {
        return merek;
    }

    public void setMerek(String merek) {
        this.merek = merek;
    }

    public String getWarna() {
        return warna;
    }

    public void setWarna(String warna) {
        this.warna = warna;
    }

    public int getRam() {
        return ram;
    }

    public void setRam(int ram) {
        this.ram = ram;
    }

    public int getStorage() {
        return storage;
    }

    public void setStorage(int storage) {
        this.storage = storage;
    }
}
