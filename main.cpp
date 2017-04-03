#include <iostream>
#include "Televisao.h"

int main()
{
    char opcao;
    int c;
    Televisao TelevisaoTeste(17,0);
    while(true){
        std::cout<<"+ aumenta o volume"<<std::endl;
        std::cout<<"- diminui o volume"<<std::endl;
        std::cout<<"< canal anterior"<<std::endl;
        std::cout<<"> proximo canal"<<std::endl;
        std::cout<<"# escolher canal"<<std::endl;
        std::cin>>opcao;
        switch(opcao)
        {
        case '+':
            TelevisaoTeste.aumentarVolume();
            std::cout<<"Volume: "<<TelevisaoTeste.getVolume()<<std::endl;
            break;
        case '-':
            TelevisaoTeste.diminuiVolume();
            std::cout<<"Volume: "<<TelevisaoTeste.getVolume()<<std::endl;
            break;
        case '<':
            TelevisaoTeste.diminuiCanal();
            std::cout<<"Canal: "<<TelevisaoTeste.getCanal()<<std::endl;
            break;
        case '>':
            TelevisaoTeste.aumentaCanal();
            std::cout<<"Canal: "<<TelevisaoTeste.getCanal()<<std::endl;
            break;
        case '#':
            std::cout<<"Digite o canal desejado:"<<std::endl;
            std::cin>>c;
            TelevisaoTeste.setCanal(c);
            std::cout<<"O canal que voce esta assistindo e: "<<TelevisaoTeste.getCanal()<<std::endl;
            break;
        default:
            std::cout<<"Entrada invalida"<<std::endl;
        }
    }
    return 0;

}
