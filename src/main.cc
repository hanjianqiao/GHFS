#include "hello.h"

#include <iostream>

using namespace std;

int main(int argc, char **argv){
    /* Setting the i18n environment */
    setlocale (LC_ALL, "");
    bindtextdomain (LOCALPKG, LOCALEDIR);
    textdomain ("hello");

    Hello hello(_("Joe"));
    hello.say();
    return EXIT_SUCCESS;
}
