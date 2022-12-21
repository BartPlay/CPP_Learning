#include <iostream>
#include <curses.h>
#include <stdlib.h>
int main()
{
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
float min, max;

    if (a<b){
        min=b;
        if (c<min){
            min=c;
        }
    if (a>b){
        max=a;
        if()
    }
    }
}

if (c>a && c>b && a+b>c){
    std::cout<<"Mozna utworzyc trojkat"<<std::endl;
    if(a==b && b==c){
        std::cout<<"Jest to trojkat rownoboczny"<<std::endl;
    }
    else if (a==b && c!=a && c!=b){
        std::cout<<"Jest to trojkat rownoramienny"<<std::endl;
       
    }
    else if (a*a+b*b==c*c){
        std::cout<<"Jest to trojkat prostokatny"<<std::endl;
    }
    system("read -n1 -p ' ' key");
    return 0;
    
}
}
