#include <iostream>

using namespace std;

class Arttir{

public:
    Arttir(int c=0, int i=1);
    void artisEkle(){sayi +=arttir;}
    void yaz()const;
private:
    int sayi;
    const int arttir;  //const veri üyesi

};

Arttir::Arttir(int c, int i):arttir(i)  // const üye için member initializer
{sayi=c;}

void Arttir::yaz()const{
    cout << "sayi = "<<sayi<<", arttır = "<<arttir << endl;
}

int main()
{
    Arttir deger(10,5);
    cout<<"Arttırmadan önce : ";
    deger.yaz();

    for(int j=0; j<3;j++){
        deger.artisEkle();
        cout<<"Arttırdıktan sonra : "<<j+1<<":";
        deger.yaz();
    }

    return 0;
}
