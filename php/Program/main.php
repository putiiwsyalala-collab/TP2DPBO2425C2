<?php

include_once 'Produk.php';
include_once 'BarangElektronik.php';
include_once 'Handphone.php';

// Array berisi beberapa object Handphone
$listHp = [
    new Handphone("HP001", 10, 20000000, "iPhone 15", 1, 2023, "Apple", "Hitam", 8, 256),
    new Handphone("HP002", 5, 15000000, "iPhone 16", 1, 2025, "Apple", "Putih", 8, 128),
    new Handphone("HP003", 6, 19000000, "Samsung Galaxy S25 Ultra", 1, 2025, "Samsung", "Biru", 12, 256),
    new Handphone("HP004", 4, 8000000, "Samsung Galaxy S24 FE", 1, 2025, "Samsung", "Hitam", 8, 256),
    new Handphone("HP005", 3, 26000000, "Samsung Galaxy Z Fold6", 2, 2024, "Samsung", "Silver", 12, 512),
];


// form post, Jika ada request POST, tambahkan objek Handphone baru ke array $listHp
if ($_SERVER["REQUEST_METHOD"] === "POST") {
    $listHp[] = new Handphone(
        $_POST["kode"],                // kodeProduk
        intval($_POST["stok"]),        // stok
        intval($_POST["harga"]),       // harga
        $_POST["nama"],                // namaBarang
        intval($_POST["garansi"]),     // garansi
        intval($_POST["tahun"]),       // tahunProduksi
        $_POST["merek"],               // merek
        $_POST["warna"],               // warna
        intval($_POST["ram"]),         // ram
        intval($_POST["storage"])      // storage
    );
}
?>


<!DOCTYPE html>
<html>
<head>
    <title>Data Handphone</title>
    <style>
        /* Styling sederhana untuk tabel */
        table {
            border-collapse: collapse;
            width: 100%;
            margin-top: 15px;
        }
        th, td {
            border: 1px solid black;
            padding: 8px;
            text-align: center;
        }
        th {
            background: #eee;
        }
        h2 {
            margin-top: 20px;
        }
        input, button {
            margin: 3px 0;
            padding: 6px;
        }
    </style>
</head>
<body>
    <!-- form input data baru -->
    <h2>Tambah Data Handphone</h2>
    <form method="POST">
        <input type="text"   name="kode"   placeholder="Kode Produk" required><br>
        <input type="number" name="stok"   placeholder="Stok" required><br>
        <input type="number" name="harga"  placeholder="Harga" required><br>
        <input type="text"   name="nama"   placeholder="Nama Barang" required><br>
        <input type="number" name="garansi" placeholder="Garansi (tahun)" required><br>
        <input type="number" name="tahun"  placeholder="Tahun Produksi" required><br>
        <input type="text"   name="merek"  placeholder="Merek" required><br>
        <input type="text"   name="warna"  placeholder="Warna" required><br>
        <input type="number" name="ram"    placeholder="RAM (GB)" required><br>
        <input type="number" name="storage" placeholder="Storage (GB)" required><br>
        <button type="submit">Tambah</button>
    </form>

    <!-- table-->
  
    <h2>Daftar Handphone</h2>
    <table>
        <tr>
            <th>Kode Produk</th>
            <th>Stok</th>
            <th>Harga</th>
            <th>Nama Barang</th>
            <th>Garansi</th>
            <th>Tahun Produksi</th>
            <th>Merek</th>
            <th>Warna</th>
            <th>RAM</th>
            <th>Storage</th>
        </tr>

        <?php 
        // Looping setiap objek Handphone di array $listHp
        foreach ($listHp as $hp): ?>
        <tr>
            <!-- Panggil getter sesuai urutan format -->
            <td><?= $hp->getKodeProduk() ?></td>
            <td><?= $hp->getStok() ?></td>
            <td><?= number_format($hp->getHarga(), 0, ',', '.') ?></td> <!-- format harga rupiah -->
            <td><?= $hp->getNamaBarang() ?></td>
            <td><?= $hp->getGaransi() ?> tahun</td>
            <td><?= $hp->getTahunRilis() ?></td>
            <td><?= $hp->getMerek() ?></td>
            <td><?= $hp->getWarna() ?></td>
            <td><?= $hp->getRam() ?> GB</td>
            <td><?= $hp->getStorage() ?> GB</td>
        </tr>
        <?php endforeach; ?>
    </table>
</body>
</html>
