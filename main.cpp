#include "Foco.hpp"
#include "Serie.hpp"

int main(int argc, char const *argv[]){
    Foco foco1;
    Foco foco2;

    foco1.Encender();
    foco2.Apagar();

    foco1.Imprimir();
    foco2.Imprimir();

    Serie serieNavidenia;
    
    serieNavidenia.Imprimir();
    serieNavidenia.EncenderTodo();
    serieNavidenia.Imprimir();
    serieNavidenia.ApagarTodo();
    serieNavidenia.Imprimir();
    serieNavidenia.ApagarCantidad(10);
    serieNavidenia.Imprimir();
    serieNavidenia.AlternarEncendido();
    serieNavidenia.Imprimir();
    serieNavidenia.RecorrerDerecha();
    serieNavidenia.Imprimir();
    serieNavidenia.RecorrerIzquierda();
    serieNavidenia.Imprimir();

    return 0;
}