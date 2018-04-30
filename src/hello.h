#include <string>
#include <iostream>

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
