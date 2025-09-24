<?php
class Produk {
    private $kodeProduk;
    private $stok;
    private $harga;

    public function __construct($kodeProduk, $stok, $harga) {
        $this->kodeProduk = $kodeProduk;
        $this->stok = $stok;
        $this->harga = $harga;
    }

    //getter dan setter
    public function getKodeProduk() {
        return $this->kodeProduk;
    }
    public function setKodeProduk($kodeProduk) {
        $this->kodeProduk = $kodeProduk;
    }
    public function getStok() {
        return $this->stok;
    }
    public function setStok($stok) {
        $this->stok = $stok;
    }

    public function getHarga() {
        return $this->harga;
    }
    public function setHarga($harga) {
        $this->harga = $harga;
    }





}
