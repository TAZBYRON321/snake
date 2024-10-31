#include <ftxui/dom/elements.hpp>
#include <ftxui/screen/screen.hpp>
#include <ftxui/screen/color.hpp>
#include <ftxui/screen/terminal.hpp>
#include <iostream>
#include <thread>

using namespace std;
using namespace ftxui;

int main(int argc, char const *argv[])
{
    std::string reset_position;
    int frame = 0;

    while (true)
    {
        auto can = Canvas(300,100);
        //can.DrawBlockCircle(150,25,frame);
        can.DrawBlockCircle(150,25,frame-90);
        can.DrawBlockCircle(150,25,frame-80);
        can.DrawBlockCircle(150,25,frame-70);
        can.DrawBlockCircle(150,25,frame-60);
        can.DrawBlockCircle(150,25,frame-50);
        can.DrawBlockCircle(150,25,frame-40);
        can.DrawBlockCircle(150,25,frame-30);
        can.DrawBlockCircle(150,25,frame-20);
        can.DrawBlockCircle(150,25,frame-10);
        can.DrawBlockCircle(150,25,frame);
        
 /*
       can.DrawBlockLine(10,10,10,10);
       can.DrawBlockLine(10,10,15,20);
       can.DrawBlockLine(10,10,20,30);
       can.DrawBlockLine(10,10,30,40);
       can.DrawBlockLine(10,10,40,50);
       can.DrawBlockLine(10,10,50,60);
       can.DrawBlockLine(10,10,60,70);
       can.DrawBlockLine(10,10,70,80);
  */

        
        
        //can.DrawBlockLine(10,10,frame,10);
        
        Screen pantalla = Screen::Create(Dimension::Full(), Dimension::Full());
        Element lienzo = bgcolor(Color::Blue, canvas(&can));
        Render(pantalla, lienzo);
        std::cout << reset_position;
        pantalla.Print();
        reset_position = pantalla.ResetPosition(true);
        this_thread::sleep_for(0.08s);
        frame++;
    }

    return 0;
}