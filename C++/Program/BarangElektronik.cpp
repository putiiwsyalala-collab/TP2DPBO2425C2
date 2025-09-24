#include <iostream>
#include <string>
#include "Produk.cpp"


using namespace std;


class BarangElektronik : public Produk {
private:
     string namaBarang;
     int garansi;
     int tahunRilis;

public:
     BarangElektronik(){

     }

     //construktor dengan parameter

     BarangElektronik(int kodeProduk, int stok, int harga, string namaBarang, int garansi,
         int tahunRilis) : Produk(kodeProduk, stok, harga) {

        this->namaBarang = namaBarang;
        this->garansi = garansi;
        this->tahunRilis = tahunRilis;
     }

     //getter dan setter

       string getNamaBarang(){
            return namaBarang;
        }
        void setNamaBarang(string namaBarang){
            this->namaBarang= namaBarang;
        }
        int getGaransi(){
            return garansi;
        }
        void setGaransi(int garansi){
            this->garansi = garansi;
        }
        int getTahunRilis(){
            return tahunRilis;
        }
        void setTahunRilis (int tahunRilis){
            this->tahunRilis = tahunRilis;
        }


  
};
