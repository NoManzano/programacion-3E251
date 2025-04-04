#include <iostream>
using namespace std;


int main(int argc, char const *argv[]){
    int a= 74;
    int b= 185;
    int* direccion= &a;

    cout << "Direccion: " <<&direccion <<endl;
    cout << "Peso " << sizeof(direccion)<<endl;
    cout << "Direccion: " << direccion << endl;
    cout << "Direccion: " << *direccion << endl;
    cout<< "Operador Direccion" << endl;
    cout << "Direccion a: " << &a<<endl;
    cout << "Direccion b : " << &b<<endl;

    cout << "int: " << sizeof(int)<<endl;
    cout << "char: " << sizeof(char)<<endl;
    cout << "float: " << sizeof(float)<<endl;
    cout << "double: " << sizeof(double)<<endl;
    cout << "bool: " << sizeof(bool)<<endl;

}