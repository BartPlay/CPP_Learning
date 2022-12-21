#include <iostream>
//1
int pot(int n,int m){
    int s=n;
    for (int i=0;i<m;i++){
        s=s*n;

    }
    return s;
}
//2
int NWD(int a, int b){
    while(a!=b){
        if (a>b){
            a=a-b;
        }
        else{
            b=b-a;
        }
    }
    return a;

}
//3
int reku(int n){
    if (n==0){
        return 1;
    }
    else{
        return 2*reku(n-1)+5;
    }

}

int main(){



}