import java.util.ArrayList;
import java.util.Scanner;

public class main {
    // Fungsi untuk menampilkan tabel data handphone
    public static void tampilkanTabel(ArrayList<Handphone> listHp) {
        // format untuk setiap baris tabel
        String leftAlignFormat = "| %-6s | %-6s | %-12s | %-25s | %-7s | %-6s | %-10s | %-8s | %-6s | %-8s |%n";

        // header tabel
        System.out.format("+--------+--------+--------------+---------------------------+---------+--------+------------+----------+--------+----------+%n");
        System.out.format("| Kode   | Stok   | Harga        | Nama                      | Garansi | Tahun  | Merek      | Warna    | RAM    | Storage  |%n");
        System.out.format("+--------+--------+--------------+---------------------------+---------+--------+------------+----------+--------+----------+%n");

        // isi tabel
        for (Handphone hp : listHp) {
            System.out.format(leftAlignFormat,
                    hp.getKodeBarang(),                // kode produk
                    hp.getStok(),                      // stok
                    hp.getHarga(),                     // harga
                    hp.getNamaBarang(),                // nama
                    hp.getGaransi() + "tahun",           // garansi
                    hp.getTahunRilis(),                // tahun produksi
                    hp.getMerek(),                     // merek
                    hp.getWarna(),                     // warna
                    hp.getRam() + "GB",               // ram
                    hp.getStorage() + "GB"            // storage
            );
        }

        // footer tabel
        System.out.format("+--------+--------+--------------+---------------------------+---------+--------+------------+----------+--------+----------+%n");
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        ArrayList<Handphone> listHp = new ArrayList<>();

        // Data Awal --> Konstruktor: (kodeBarang, namaBarang, garansi, harga, stok, tahunRilis, merek, warna, ram, storage)
        listHp.add(new Handphone("001", "iPhone_15", 1, 20000000, 10, 2023, "Apple", "Hitam", 8, 256));
        listHp.add(new Handphone("002", "iPhone_16", 1, 15000000, 5, 2024, "Apple", "Hitam", 8, 128));
        listHp.add(new Handphone("003", "Samsung_Galaxy_S25_Ultra", 1, 19000000, 5, 2025, "Samsung", "Biru", 12, 256));
        listHp.add(new Handphone("004", "Samsung_Galaxy_S24_FE", 1, 8000000, 6, 2025, "Samsung", "Hitam", 8, 256));
        listHp.add(new Handphone("005", "Samsung_Galaxy_Z _Fold6", 4, 26000000, 3, 2024, "Samsung", "Putih", 12, 512));

        while (true) {
            System.out.println("1. Add Data");
            System.out.println("2. Show Table");
            System.out.print("Pilih 1/2 : ");
            String pilihan = sc.nextLine();

            if (pilihan.equals("1")) {
                System.out.println("Masukkan data (kodeProduk stok harga namaBarang garansi tahunProduksi merek warna ram storage): ");
                String[] data = sc.nextLine().split(" ");

                if (data.length == 10) {
                    // parsing sesuai urutan input
                    String kode = data[0];
                    int stok = Integer.parseInt(data[1]);
                    int harga = Integer.parseInt(data[2]);
                    String nama = data[3];
                    int garansi = Integer.parseInt(data[4]);
                    int tahun = Integer.parseInt(data[5]);
                    String merek = data[6];
                    String warna = data[7];
                    int ram = Integer.parseInt(data[8]);
                    int storage = Integer.parseInt(data[9]);

                    listHp.add(new Handphone(
                            kode, nama, garansi, harga, stok, tahun, merek, warna, ram, storage
                    ));
                    System.out.println("Data berhasil ditambah!\n");
                } else {
                    System.out.println("Format input salah!\n");
                }

            } else if (pilihan.equals("2")) {
                tampilkanTabel(listHp);
            } else {
                System.out.println("Pilihan tidak valid!\n");
            }
        }
    }
}
