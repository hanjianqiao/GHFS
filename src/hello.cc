#include "hello.h"

Hello::Hello(string name){
    this->name = name;
}

void Hello::say(){
    cout << "My name is " << name << endl;
}