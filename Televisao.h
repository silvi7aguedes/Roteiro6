#ifndef TELEVISAO_H_INCLUDED
#define TELEVISAO_H_INCLUDED

class Televisao
{
    private:
        int canal;
        int volume;
    public:
        int getVolume(){return volume;}
        void setCanal(int c) {canal = c;}
        int getCanal(){return canal;}
        void aumentarVolume()
        {
            if(volume == 100){
                std::cout<<"Volume maximo!"<<std::endl;
            }
            else{
                volume++;
            }
        }
        void diminuiVolume()
        {
            if(volume == 0){
                std::cout<<"Volume minimo!"<<std::endl;
            }
            else{
                volume--;
            }
        }
        void aumentaCanal()
        {
            if(canal == 200){
                canal = 0;
            }
            else{
                canal++;
            }
        }
        void diminuiCanal()
        {
            if(canal == 0){
                canal = 200;
            }
            else{
                canal--;
            }
        }
        Televisao(int v, int c);
};
Televisao::Televisao(int v, int c)
{
    volume = v;
    canal = c;
}

#endif // TELEVISAO_H_INCLUDED
