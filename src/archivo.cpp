#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(int argc, char const *argv[]){
ofstream archivo("archivo.txt");
ifstream archivoLectura("archivo.txt");

cout << "Leyendo del archivo..." << endl;



if(!archivo.is_open()){
    cerr << "Error al abrir el archivo para escritura." << endl;
    return 1;
}

    cout << "Escribiendo en el Archivo..." << endl;
    archivo << "Hola mundo" << endl;
    for(int i = 0; i < 6; i++){
        cout << "Linea " << i << endl;
    }

    if(!archivoLectura.is_open()){
    cerr << "Error al abrir el archivo para escritura." << endl;
    return 1;
    }
    cout << "Leyendo del archivo..." << endl;
    string linea;
    while(getline(archivoLectura, linea)){
    cout << linea << endl;
}

    archivo.close();
return 0;
}