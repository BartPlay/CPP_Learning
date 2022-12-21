#include <iostream>
#include <curses.h>
#include <stdlib.h>
#include <sstream>
#include<vector>
std::vector <std::string> nKrasnali;
std::vector <std::string> nUlicy;
std::vector <std::string> nrBudynku;
std::vector <std::string> dlG;
std::vector <std::string> szG;
std::string t;
int a=0;
void dT(int i){
    getline(std::cin,t);
    std::cout<<"Podaj imie krasnala: "<<std::endl;
    getline(std::cin,t);
    nKrasnali.push_back(t);
    if (nKrasnali[i]==""){
        std::cout<<"Brak danych"<<std::endl;
    }
    t="";
    std::cout<<"Podaj ulice: ";
    getline(std::cin,t);
    nUlicy.push_back(t);
    if (nUlicy[i]==""){
        std::cout<<"Brak danych"<<std::endl;
    }
    t="";
    std::cout<<"Podaj nr budynku: ";
    getline(std::cin,t);
    nrBudynku.push_back(t);
    if (nrBudynku[i]==""){
        std::cout<<"Brak danych"<<std::endl;
    }
    t="";
    std::cout<<"Podaj dlugosc geo: ";
    getline(std::cin,t);
    dlG.push_back(t);
    if (dlG[i]==""){
        std::cout<<"Brak danych"<<std::endl;
    }
    t="";
    std::cout<<"Podaj szerokosc geo: ";
    getline(std::cin,t);
    szG.push_back(t);
    if (szG[i]==""){
        std::cout<<"Brak danych"<<std::endl;
    }
    



}
void dane(){
    std::string s;
    int n;
    int ilosc;
    std::cout<<"Podaj ile krasnali chcesz wprowadzic do bazy: ";
    std::cin>>ilosc;
    for (int i = 0;i<ilosc;i++){
        dT(i);
    }

}
void Wyswietl(){
    for (int i=0;i<nUlicy.size();i++){
        std::cout<<nKrasnali[i]<<"-"<<nUlicy[i]<<"-"<<nrBudynku[i]<<"-"<<dlG[i]<<"-"<<szG[i]<<std::endl;
        
    }
}

int main(){
    dane();
    Wyswietl();
    system("read -n1 -p ' ' key");
    return 0;

}