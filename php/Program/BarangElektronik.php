<?php

class BarangElektronik extends Produk{
    private $namaBarang;
    private $garansi;
    private $tahunRilis;

    public function __construct($kodeProduk, $stok, $harga, $namaBarang, $garansi, $tahunRilis) {
        parent::__construct($kodeProduk, $stok, $harga);
        $this->namaBarang = $namaBarang;
        $this->garansi = $garansi;
        $this->tahunRilis = $tahunRilis;

  }

   //getter dan setter
    public function getNamaBarang() {
        return $this->namaBarang;
    }
    public function setNamaBarang($namaBarang) {
        $this->namaBarang = $namaBarang;
    }
    public function getGaransi() {
        return $this->garansi;
    }
    public function setGaransi($garansi) {
        $this->garansi= $garansi;
    }

    public function getTahunRilis() {
        return $this->tahunRilis;
    }
    public function setTahunRilis($tahunRilis) {
        $this->tahunRilis = $tahunRilis;
    }


}




