#include <iostream>
#include <cstring>
#include <cstdlib>
#include "prototype.h"

using namespace std;
int yearOfMan;

int main()
{
    const int SIZE = 6;
    char filterType[SIZE];
    bool startProgram;

    startProgram = mainMenu(filterType);

    if (startProgram == true)
        cout << "The filter you are looking for is #" <<filterType<< endl;
    else
        return 0;

}
