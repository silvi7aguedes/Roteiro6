#include <iostream>
#include "Relogio.h"

int main()
{
    int s;
    Relogio RelogioTeste;
    RelogioTeste.setHorario();
    std::cout<<"Quantos segundos deseja avancar? "<<std::endl;
    std::cin>>s;
    for(int i=0;i<s;i++){
        RelogioTeste.avancarHorario();
    }
    std::cout<<RelogioTeste.getHora()<<":"<<RelogioTeste.getMinuto()<<":"<<RelogioTeste.getSegundo();
    return 0;

}
