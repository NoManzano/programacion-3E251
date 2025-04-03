#include <ftxui/screen/screen.hpp>
#include <ftxui/dom/elements.hpp>
#include <iostream>
#include <string>
#include <thread>
using namespace std;
using namespace ftxui;

int main(int argc, char const *argv[]){

auto pantalla = Screen::Create(
ftxui::Dimension::Full(),
Dimension::Full()
);
int fotograma = 0;
string resetPosition;
while(true){
auto documento = vbox(
spinner(21,fotograma)
);
Render(pantalla, documento);
cout << resetPosition;
pantalla.Print();
resetPosition = pantalla.ResetPosition();
fotograma++;
std::this_thread::sleep_for(0.04s);
}
}