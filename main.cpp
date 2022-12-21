#include <iostream>
#include <curses.h>
#include <stdlib.h>
#include <sstream>
int main()
{
//zad1
//bez bibliotek
std::cout<<"Tu\njest\nbardzo\ndlugi\nnapis"<<std::endl;
    std::string slowo;
    std::istringstream iss ("Tu jest bardzo dlugi napis");
    while (iss >> slowo){
        std::cout<<slowo<<std::endl;
    }
//zad2
int l=0;
std::cin>>l;
l+=1;
std::cout<<l<<std::endl;

//zad3
float sr;
int k;
for (int i=0;i<3;i++){
    std::cin>>k;
    sr+=k;
}
sr=sr/3;
std::cout<<"Srednia: "<<sr<<std::endl;

//zad4
int n;
std::cin>>n;
if (n<0){
    n=n*(-1);
    std::cout<<n<<std::endl;
}
else{
    std::cout<<n<<std::endl;
}

//zad5
int l1, l2;
float w;
std::string znak;
std::cout<<"Podaj liczbe pierwsza: ";
std::cin>>l1;
std::cout<<"Podaj liczbe druga: ";
std::cin>>l2;
std::cout<<"Podaj znak dzialania z dostepnych (+, −, ∗, /): ";
std::cin>>znak;
while (znak!="+" && znak!="*"&&znak!="/"&&znak!="-" ){
    std::cout<<"Podaj poprawny znak: ";
    std::cin>>znak;
}
if (znak=="+"){
    w=l1+l2;
    std::cout<<w<<std::endl;
}
else if (znak=="-"){
    w=l1-l2;
    std::cout<<w<<std::endl;
}
else if (znak=="*"){
    w=l1*l2;
    std::cout<<w<<std::endl;
}
else if (znak=="/"){
    w=l1/l2;
    std::cout<<w<<std::endl;
}
//zad6
float a=0,b=0,c=0;
while (a<=0){
std::cout<<"Podaj dlugosc pierwszego boku: ";
std::cin>>a;}
while (b<=0){
std::cout<<"Podaj dlugosc drugiego boku: ";
std::cin>>b;}
while (c<=0){
    std::cout<<"Podaj dlugosc trzeciego boku: ";
    std::cin>>c;
}
if (c +b>a && c+a>b && a+b>c){
    std::cout<<"Mozna utworzyc trojkat"<<std::endl;
    if(a==b && b==c){
        std::cout<<"Jest to trojkat rownoboczny"<<std::endl;
    }
    else if (a==b && c!=a && c!=b || a==c && b!=a && b!=c || c==b && a!=b && a!=c ){
        std::cout<<"Jest to trojkat rownoramienny"<<std::endl;
       
    }
    else if (a*a+b*b==c*c || a*a+c*c==b*b || b*b+c*c==a*a){
        std::cout<<"Jest to trojkat prostokatny"<<std::endl;
    }
}
    system("read -n1 -p ' ' key");
    return 0;

}