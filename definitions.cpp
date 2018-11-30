#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;


//copied prototype to have a "back to main" feature in the program
bool mainMenu(char filterType[]);

//function to get the year of manufacture from user, and write information to
//c string
int yearOfManufacture(char filterType[])
{
    system("cls");
    int year = 0;
    int index;


    do
    {
        index = 0;

        //get user input
        cout << "Type a year of Manufacture from 1998-2018.\n";
        cout << "To return to the Main Menu, type -1:  ";
        cin >> year;


        if (year == 1998){
            strcat(filterType, "98");
            index++;
            }
        else if (year == 1999){
            strcat(filterType, "99");
            index++;
            }
        else if (year == 2000){
            strcat(filterType, "00");
            index++;
            }
        else if (year == 2001){
            strcat(filterType, "01");
            index++;
            }
        else if (year == 2002){
            strcat(filterType, "02");
            index++;
            }
        else if (year == 2003){
            strcat(filterType, "03");
            index++;
            }
        else if (year == 2004){
            strcat(filterType, "04");
            index++;
            }

        else if (year == 2005){
            strcat(filterType, "05");
            index++;
            }
        else if (year == 2006){
            strcat(filterType, "06");
            index++;
            }
        else if (year == 2007){
            strcat(filterType, "07");
            index++;
            }
        else if (year == 2008){
            strcat(filterType, "08");
            index++;
            }
        else if (year == 2009){
            strcat(filterType, "09");
            index++;
            }
        else if (year == 2010){
            strcat(filterType, "10");
            index++;
            }
        else if (year == 2011){
            strcat(filterType, "11");
            index++;
            }
        else if (year == 2012){
            strcat(filterType, "12");
            index++;
            }
        else if (year == 2013){
            strcat(filterType, "13");
            index++;
            }
        else if (year == 2014){
            strcat(filterType, "14");
            index++;
            }
        else if (year == 2015){
            strcat(filterType, "15");
            index++;
            }
        else if (year == 2016){
            strcat(filterType, "16");
            index++;
            }
        else if (year == 2017){
            strcat(filterType, "17");
            index++;
            }
        else if (year == 2018){
            strcat(filterType, "18");
            index++;
            }
        //Return to Main Menu
        else if (year == -1){
            index++;
            mainMenu(filterType);
        }
        //Exception to catch user errors.
        else{
            system("cls");
            cout << "Error, please enter a year between 1998 and 2018. \n"<<endl;
        }
    } while(index == 0);

    return year;
}

//Function to get the number of Cylinders from the user and write the info
//to the c string
int numCylinderEdsel(char filterType[])
{
    system("cls");
    int index = 0;
    int numCylinders;

    do
    {
        cout << "Enter the number of Cylinders of your Model.(6 or 8) ";
        cout << "To return to the Main Menu, type -1:  ";
        cin >> numCylinders;

        if (numCylinders == 6){
            strcat(filterType, "06");
            index++;
        }
        else if (numCylinders == 8){
            strcat(filterType, "08");
            index++;
        }
        else if (numCylinders == -1){
            index++;
            mainMenu(filterType);
        }
        //exception for user errors
        else
        {
            system("cls");
            cout << "Error, invalid entry. Please enter 6 or 8. \n" <<endl;
        }
    } while (index == 0);

    return numCylinders;

}

int numCylinderAustin(char filterType[])
{
    system("cls");
    int index;
    int numCylinders;

    do
    {
        index = 0;
        cout << "Enter the number of Cylinders of your Model.(4 or 6) ";
        cout << "To return to the Main Menu, type -1:  ";
        cin >> numCylinders;

        if (numCylinders == 4){
            strcat(filterType, "04");
            index ++;
        }
        else if (numCylinders == 6){
            strcat(filterType, "06");
            index ++;
        }
        else if (numCylinders == -1){
            index++;
            mainMenu(filterType);
        }
        else
        {
            system("cls");
            cout << "Error, invalid entry. Please enter 4 or 6. \n" <<endl;
        }
    } while (index == 0);
    return numCylinders;
}

int numCylinderCatepiller(char filterType[])
{
    system("cls");
    int index;
    int numCylinders;

    do
    {
        index = 0;
        cout << "Enter the number of Cylinders of your Model.(15 or 20) ";
        cout << "To return to the Main Menu, type -1:  ";
        cin >> numCylinders;

        if (numCylinders == 15)
        {
            strcat(filterType, "15");
            index ++;
        }
        else if (numCylinders == 20)
        {
            strcat(filterType, "20");
            index ++;
        }
        else if (numCylinders == -1){
            index++;
            mainMenu(filterType);
        }
        else
        {
            system("cls");
            cout << "Error invalid entry. Please enter 15 or 20. \n" <<endl;
        }
    } while (index == 0);
    return numCylinders;
}

int numCylinderJaguar(char filterType[])
{
    system("cls");
    int index;
    int numCylinders;

    do
    {
        index = 0;
        cout << "Enter the number of Cylinders of your Model.(6 or 12)";
        cout << "To return to the Main Menu, type -1:  ";
        cin >> numCylinders;

        if (numCylinders == 6){
            strcat(filterType, "06");
            index ++;
        }
        else if (numCylinders == 12){
            strcat(filterType, "12");
            index ++;
        }
        else if (numCylinders == -1){
            index++;
            mainMenu(filterType);
        }
        else
        {
            system("cls");
            cout << "Error, invalid entry. Please enter 6 or 12. \n" <<endl;
        }
    } while (index == 0);
    return numCylinders;
}
bool mainMenu(char filterType[])
{
    int year;
    int index;
    int numCylinders;
    system("cls");
    bool ret = false;

    do
    {
        int choice;
        const int EDSEL = 1,
                  AUSTIN = 2,
                  CATEPILLER = 3,
                  JAGUAR = 4,
                  QUIT = 5;

        cout << "\tSelect the Make of your Vehicle\n\n"
            << "1. Edsel \n"
            << "2. Austin \n"
            << "3. Catepiller \n"
            << "4. Jaguar \n"
            << "5. Quit \n\n";
        cout << "Enter your Choice: ";
        cin >> choice;

        index = 0;

        switch(choice)
        {
            case EDSEL:
                ret = true;
                filterType[0] = 'E';
                filterType[1] = '\0';
                year = yearOfManufacture(filterType);
                    if (year == -1)
                        break;
                numCylinders = numCylinderEdsel(filterType);
                    if (numCylinders == -1)
                        break;
                index++;
                cout << "\n\nThe vehicle make that you selected was an Edsel, ";
                break;
            case AUSTIN:
                ret = true;
                filterType[0] = 'A';
                filterType[1] = '\0';
                year = yearOfManufacture(filterType);
                    if (year == -1)
                        break;
                numCylinders = numCylinderAustin(filterType);
                    if (numCylinders == -1)
                        break;
                index++;
                cout << "\n\nThe vehicle make that you selected was an Austin, ";
                break;
            case CATEPILLER:
                ret = true;
                filterType[0] = 'C';
                filterType[1] = '\0';
                year = yearOfManufacture(filterType);
                if (year == -1)
                    break;
                numCylinders = numCylinderCatepiller(filterType);
                if (numCylinders == -1)
                    break;
                index++;
                cout << "\n\nThe vehicle make that you selected was a Catepiller, ";
                break;
            case JAGUAR:
                ret = true;
                filterType[0] = 'J';
                filterType[1] = '\0';
                year = yearOfManufacture(filterType);
                    if (year == -1)
                        break;
                numCylinders = numCylinderJaguar(filterType);
                    if (numCylinders == -1)
                        break;
                index++;
                cout << "\n\nThe vehicle make that you selected was a Jaguar, ";
                break;
            case QUIT:
                index++;
                system("cls");
                cout << "Program Quitting.";
                return ret;
                break;

            default:
                system("cls");
                cout << "Error, please select from choices 1-4.\n"<<endl;
                break;
        }

    } while(index == 0);



    cout << "the year that you selected was " << year
         << ",\nand the number of cylinders that you selected was " << numCylinders <<".\n";
    cout << "The filter you are looking for is #" <<filterType<<"\n\n";

    system("pause");
    system("cls");
    mainMenu(filterType);

    return ret;

}

