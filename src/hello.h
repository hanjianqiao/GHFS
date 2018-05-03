#include <string>
#include <iostream>

#include <libintl.h>
#include <locale.h>

#ifndef _
#define _(STRING) gettext(STRING)
#endif

using namespace std;

class Hello{
    public:
        Hello(string name);
        void say();
    protected:
        string name;
    private:
        int id;
};
