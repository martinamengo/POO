#include <iostream>

int f1_libreria();
int f2_libreria();
int f3_libreria();

int main() {
    std::cout<<"Ejecucion de funcion de libreria"<<std::endl;
    std::cout<<f1_libreria()<<std::endl;
    std::cout<<f2_libreria()<<std::endl;
    std::cout<<f3_libreria()<<std::endl;

    return 0;
}

int f1_libreria(){
    return 1;
}

int f2_libreria(){
    return 2;
}
int f3_libreria(){
    return 3;
}