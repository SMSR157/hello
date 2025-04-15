#include "factory_method_h.h"

void VegBurger::create(){
    cout << "created veg burger" << endl;
}

string VegBurger::ingredient(){
    return "Vegetable";
}

void NonVegBurger::create(){
    cout << "created non veg burger" << endl;
}
string NonVegBurger::ingredient(){
    return "Chucken";
}


Burger* VegResturant::prepare(){
    return new VegBurger();
}
float VegResturant::cost(){
    return 420;
}
string VegResturant::addSauce(string sauce){
    cout << "Added the " << sauce << endl;
    return sauce;
}


Burger* NonVegResturant::prepare(){
    return new NonVegBurger();
}
float NonVegResturant::cost(){
    return 69;
}
string NonVegResturant::addSauce(string sauce){
    cout << "Added the " << sauce << endl;
    return sauce;
}