#include "hello.h"

Hello::Hello(string name){
    this->name = name;
}

void Hello::say(){
    cout << _("My name is ") << name << endl;
}