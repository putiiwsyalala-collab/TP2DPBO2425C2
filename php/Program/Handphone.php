<?php

class Handphone extends BarangElektronik {
    private $merek;
    private $warna;
    private $ram;
    private $storage;

    public function __construct($kodeProduk, $stok, $harga, $namaBarang, $garansi, $tahunRilis,
                                $merek, $warna, $ram, $storage) {
        parent::__construct($kodeProduk, $stok, $harga, $namaBarang, $garansi, $tahunRilis);
        $this->merek = $merek;
        $this->warna = $warna;
        $this->ram = $ram;
        $this->storage = $storage;
    }

   ///getter dan setter
    public function getMerek() {
        return $this->merek;
    }
    public function setMerek($merek) {
        $this->merek = $merek;
    }

    public function getWarna() {
        return $this->warna;
    }
    public function setWarna($warna) {
        $this->warna = $warna;
    }

    public function getRam() {
        return $this->ram;
    }
    public function setRam($ram) {
        $this->ram = $ram;
    }
    public function getStorage() {
        return $this->storage;
    }
    public function setStorage($storage) {
        $this->storage = $storage;
    }

}

