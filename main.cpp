#include <iostream>
#include <cstring>
#include "prototype.h"

using namespace std;


int main()
{
    const int SIZE = 6;
    char filterType[SIZE];

    mainMenu(filterType);

    cout << "The filter you are looking for is #" <<filterType<< endl;

}
