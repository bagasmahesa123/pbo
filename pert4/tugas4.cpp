#include  <iostream>

using namespace std;

class umur{
    private:
    int a, b;

    public:
    void assign(int tahunlahir, int tahunsekarang){
        a=tahunlahir;
        b=tahunsekarang;
    }
    int usia(){
        return a-b;
    }

};

int main(){
    umur obj;
    obj.assign(2000, 2021);
    cout<<"Berarti Usia Kalian Sekarang adalah"<<obj.usia()<<" Tahun";
    return 0;
}