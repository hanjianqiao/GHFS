#include "hello.h"
#include "voice.hpp"

#include <iostream>

using namespace std;

int main(int argc, char **argv){
    /* Setting the i18n environment */
    setlocale (LC_ALL, "");
    bindtextdomain (LOCALPKG, (string(getenv("PWD")) + "/po").c_str());
    textdomain (LOCALPKG);

    Hello hello(_("Joe"));
    hello.say();
    say_hello();
    return EXIT_SUCCESS;
}
