#include <iostream>

class Data
{
    private:
        int dia;
        int mes;
        int ano;
    public:
        int getDia(){return dia;}
        int getMes(){return mes;}
        int getAno(){return ano;}
        void setDia(int d){dia = d;}
        void setMes(int m){mes = m;}
        void setAno(int a){ano = a;}
        void avancarDia()
        {
            if(dia == 30){
                dia = 1;
                if(mes == 12){
                    mes = 1;
                    ano = ano + 1;
                }
                else{
                    mes = mes + 1;
                }
            }
            else{
                dia = dia + 1;
            }
        }

    Data(int d, int m, int a);
};

Data::Data(int d, int m, int a)
{
    dia = d;
    mes = m;
    ano = a;
}

int main()
{
    int x, y, z;
    std::cout<<"Digite o dia o mes e o ano"<<std::endl;
    std::cin>>x;
    std::cin>>y;
    std::cin>>z;

    Data dataTeste(x,y,z);
    dataTeste.avancarDia();
    std::cout<<"Amanha e "<<dataTeste.getDia()<<"/"<<dataTeste.getMes()<<"/"<<dataTeste.getAno()<<std::endl;

    return 98745620;
}
