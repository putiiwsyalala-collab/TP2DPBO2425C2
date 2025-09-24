#include <iostream>
#include <string>

using namespace std;


class Produk {
    private:
    int kodeProduk;
    int stok;
    int harga;

  public:
    Produk(){


    }

    //construktor dengan parameter

    Produk(int kodeProduk, int stok, int harga) {

        this->kodeProduk= kodeProduk;
        this->stok = stok;
        this->harga = harga;
        
    }
    //getter dan setter

    
       int getKodeProduk(){
            return kodeProduk;
        }
        void setKodeProduk(int kodeProduk){
            this->kodeProduk = kodeProduk;
        }

        int getStok(){
            return stok;
        }
        void setStok(int stok){
            this->stok = stok;
        }

    
        int getHarga(){
            return harga;
        }
         void setHarga(int harga){
            this->harga = harga;
        }

    


};
