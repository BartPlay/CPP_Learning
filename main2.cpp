#include <iostream>
#include <stdlib.h>

#define ull unsigned long long
ull fibo(ull n){
    if (n==0){
        return 0;
    }
    if (n==1 || n==2){
        return 1;
    }
    else{
        return fibo(n-2)+fibo(n-1);
    }
}
int main(){
    while(1)
    {
        std::cout<<"1. Zadanie 1"<<std::endl;
        std::cout<<"2. Zadanie 2"<<std::endl;
        std::cout<<"3. Zadanie 3"<<std::endl;
        std::cout<<"4. Zadanie 4"<<std::endl;
        std::cout<<"5. Zadanie 5"<<std::endl;
        std::cout<<"6. Zadanie 6"<<std::endl;
        std::cout<<"Podaj numer zadania i zatwierdź enterem: ";

        char menu;
        std::cin>>menu;
        
        switch(menu){
            case '1':{
                // zad 1
                int n,m;
                std::cin>>n>>m;
                int t=n;
                while (n<m){
                    std::cout<<n<<std::endl;
                    n+=t;
                }
                break;}

            case '2':{
                // //zad2
                int s=1;
                int n;
                std::cin>>n;
                for (int i=1;i<=n;i++){
                    s=s*i;
                    
                }
                std::cout<<s<<std::endl;
                break;}
            
            case '3':{
                // //zad 3
                int n;
                std::cin>>n;
                int s=0;
                for (int i=0;i<=n;i++){
                    s+=(i*i);
                }
                std::cout<<s<<std::endl;
                break;}

            case '4':{
                //zad4
                    ull a;
                    std::cin>>a;
                    std::cout<<fibo(a)<<std::endl;
                break;}

            case '5':{
                //zad5
                int s=0;
                int b;
                ull a;
                std::cin>>a;
                while(a!=99){
                    std::cin>>b;
                    if (b>=-15&&b<=15){
                        s+=b;
                    }
                }
                std::cout<<s<<std::endl;
                break;}

            case '6':{
                //zad6
                int n = 0;
                std::cin >> n;
                for (int i = 0; i < n; i++)
                {
                    for(int j = n; j > i; j--) std::cout << " ";
                    for(int j = 0; j < i+1; j++) std::cout << i+1 << " ";
                    std::cout << "\n";

                }
                break;}
        }
    }


    system("read -n1 -p ' ' key");
    return 0;
}

