#include <iostream>
#include <string>
#include "BarangElektronik.cpp"

using  namespace std;

class Handphone : public BarangElektronik{
    private:
    string merek;
    string warna;
    int ram;
    int storage;


    public:
    Handphone(){

    }

    //contruktor

    Handphone(int kodeProduk, int stok, int harga, string namaBarang, int garansi, int tahunRilis, string merek, string warna,
             int ram, int storage) : BarangElektronik(kodeProduk, stok, harga, namaBarang, garansi, tahunRilis) {
        this->merek = merek;
        this->warna = warna;
        this->ram = ram;
        this->storage = storage;


    }

    //getter dan setter

     string getMerek(){
           return merek;
        }
        
     void setMerek(string merek){
           this->merek = merek;
        }

     string getWarna(){
            return warna;
        }

     void setWarna(string warna){
          this-> warna= warna;
        }

     int getRam(){
          return ram;
        }

     void setRam(int ram){
          this->ram = ram;
        }

      int getStorage(){
          return storage;
        }

     void setStorage(int storage){
          this->storage = storage;
        }













};
