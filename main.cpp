#include <ftxui/screen/screen.hpp>
#include <ftxui/dom/elements.hpp>
#include <iostream>

using namespace ftxui;

int main(int argc, char const *argv[]){

     auto pantalla = Screen::Create(
        Dimension::Full(),
        Dimension::Full()
     );
    auto documento = vbox(
        spinner(21,1)
    );

    Render(pantalla, documento);
    pantalla.Print();

}