#include <iostream>

using namespace std;

struct sOsoba{
    string mImie;
    string mNazwisko;
    int mWiek;
};

class cOsoba{
    public:
        string mImie;
        string mNazwisko;
        int mWiek;
        void Wyswietl();
};

void cOsoba::Wyswietl(){
    cout<<"Imie: "<<mImie<<"Nazwisko: "<<mNazwisko<<"Wiek: "<<mWiek<<endl;
}


int main(){
    cOsoba o1;
    o1.mImie = "Przemek";
    o1.mNazwisko = "Nowak";
    o1.mWiek = 18;
    o1.Wyswietl();

}