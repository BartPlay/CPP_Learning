#include <iostream>
#include <string>
using namespace std;
struct zespolone{
    double im;
    double re;
};
zespolone addNewZespolone(double im, double re)
{
    zespolone new_Zespolone;
    new_Zespolone.im=im;
    new_Zespolone.re=re;
    return new_Zespolone;
}
void Zespolone_dodawanie(zespolone z1, zespolone z2){
    cout<<"SUMA"<<endl<<"im: "<<z1.im + z2.im<<endl<<"re: "<<z1.re + z2.re<<endl;
}
void Zespolone_odejmowanie(zespolone z1, zespolone z2){
    cout<<"ODEJMOWANIE"<<endl<<"im: "<<z1.im - z2.im<<endl<<"re: "<<z1.re - z2.re<<endl;
}
void Zespolone_iloczyn(zespolone z1, zespolone z2){
    cout<<"ILOCZYN"<<endl<<"im: "<<z1.im * z2.im<<endl<<"re: "<<z1.re * z2.re<<endl;
}
int main()
{
    double im, re;
    zespolone liczby[2];
    for (int i=0;i<2;i++){
        cout<<"Podaj im: ";
        cin>>im;
        cout<<"Podaj re: ";
        cin>>re;
        liczby[i]=addNewZespolone(im, re);
    }
    Zespolone_dodawanie(liczby[0],liczby[1]);
    Zespolone_odejmowanie(liczby[0],liczby[1]);
    Zespolone_iloczyn(liczby[0],liczby[1]);


    cin.ignore();
    cin.ignore();
    cin.ignore();
}