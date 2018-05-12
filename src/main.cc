#include "voice.hpp"
#include <cstdlib>
#include <iostream>
#include "hello.hpp"
using namespace std;

int main(int argc, char **argv){
    /* Setting the i18n environment */
    setlocale (LC_ALL, "");
    bindtextdomain (LOCALPKG, LOCALDIR);
    textdomain (LOCALPKG);

    Hello hello(_("Joe"));
    hello.say();
    say_hello();
    return EXIT_SUCCESS;
}
