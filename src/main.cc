#include "hello.h"

#include <iostream>

using namespace std;

int main(int argc, char **argv){
    Hello hello("Joe");
    hello.say();
    return 0;
}