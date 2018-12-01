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
    bool ret = true;

    //loop used to repeat unless quit is selected
    //in mainMenu function.
    while(ret == true){
        ret = mainMenu(filterType);
        if (ret == true)
            system("pause");
    }

    return 0;
}
