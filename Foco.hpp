#include "Estadofoco.hpp"
#include <iostream>
class Foco
{
private:
    EstadoFoco estado;
public:
    Foco() {
        estado = EstadoFoco::Apagado;
    }
    ~Foco() {}
    void Encender(){
        estado = EstadoFoco::Encendido;
    }
    void Apagar(){
        estado = EstadoFoco::Apagado;
    }
    void Imprimir(){

        switch(estado){
            case EstadoFoco::Apagado:
            std::cout<<"*"<< std:: endl;
            break;
            case EstadoFoco::Encendido:
            std::cout<<"o"<< std:: endl;
            break;
            default:
            std::cout<<"Explote"<< std:: endl;
            break;
        }
    }
    void Alternar(){
        if(estado == EstadoFoco::Encendido){
            estado = EstadoFoco::Apagado;
        }else{
            estado = EstadoFoco::Encendido;
        }
    }
};