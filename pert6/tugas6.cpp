#include <iostream>
using namespace std;
class Waktu{
    public://Abstraksi adalah kemampuan sebuah program untuk melewati aspek informasi yang diproses olehnya,
           //yaitu kemampuan untuk memfokus pada inti.Teknik ini juga membantu saya mengidentifikasikan informasi
           //spesifikasi mana yang penting dan informasi mana yang harus di sembunyikan.
           //jadi abstraksi pada kelas jam terdapat pada public,dimana public ini memberitahu informasi jam,menit,
           //detik yang nantinya di jalankan sesuai informasi yang di berikan oleh public

        Waktu(int j=23, int m=59, int d=59);
        void setWaktu( int j, int m, int d);
        int getJam();
        int getMenit();
        int getDetik();

    private://Enkapsulasi ini pada dasarnya tentang menyembunyikan status objek dengan bantuan pengubah seperti
            //privat, publik.Sedangkan enkapsulasi sendiri pada program jam ini terdapat pada private yang dimana
            //private ini adalah dapat diketahui informasi yang di sembunyikan dan hanya di akses oleh variabel 
            //yang memiliki akses private

        int jam;
        int menit;
        int detik;
};

Waktu::Waktu(int jam, int menit, int detik){
    setWaktu(jam, menit, detik);
}

void Waktu::setWaktu(int j, int m, int d){
    if ((j>=0 && j<24) && (m>=0 && m<=59) && (d>=0 && d<=59)){
        jam = j;
        menit = m;
        detik = d;
    } else {
        cout<<"format waktu yang dimasukan salah"<<endl;
    }
}

int Waktu::getJam(){
    return jam;
}
int Waktu::getMenit(){
    return menit;
}

int Waktu::getDetik(){
    return detik;
}


int main(){    
    Waktu t;
    t.setWaktu(23,59,59);
    cout<<endl<<t.getJam()<<":"<<t.getMenit()<<":"<<t.getDetik()<<endl;

    return 0;
}