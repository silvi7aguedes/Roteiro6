#ifndef RELOGIO_H_INCLUDED
#define RELOGIO_H_INCLUDED

class Relogio
{
    private:
        int hora;
        int minuto;
        int segundo;
        void setHora(int h)
        {
            if(h>=0 && h<24){
                hora = h;
            }
            else{
                hora = 0;
            }
        }
        void setMinuto(int m)
        {
            if(m>=0 && m<60){
                minuto = m;
            }
            else{
                minuto = 0;
            }
        }
        void setSegundo(int s)
        {
            if(s>=0 && s<60){
                segundo = s;
            }
            else{
                segundo = 0;
            }
        }
    public:
        void setHorario()
        {
            int h, m, s;
            std::cout<<"Hora: ";
            std::cin>>h;
            setHora(h);
            std::cout<<"Minuto: ";
            std::cin>>m;
            setMinuto(m);
            std::cout<<"Segundo: ";
            std::cin>>s;
            setSegundo(s);
        }
        int getHora(){return hora;}
        int getMinuto(){return minuto;}
        int getSegundo() {return segundo;}
        void avancarHorario()
        {
            if(segundo==59){
                if(minuto==59){
                    if(hora==23){
                        segundo = 0;
                        minuto = 0;
                        hora = 0;
                    }
                    else{
                        segundo = 0;
                        minuto = 0;
                        hora++;
                    }
                }
                else{
                    segundo = 0;
                    minuto++;
                }
            }
            else{
                segundo++;
            }
        }
};

#endif // RELOGIO_H_INCLUDED
