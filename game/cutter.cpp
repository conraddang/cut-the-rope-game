#include <cutter.h>
#include <environment.h>
#include <threads.h>
#include<iostream>

Cutter :: Cutter () {
    std::cout << "Cutter" << std::endl;
    //add design, characteristics and location of fly
}

void Cutter :: ClickScreen(){

}

void Cutter :: TouchTread() {
    Threads tr;
    tr.ContactCutter();
}
