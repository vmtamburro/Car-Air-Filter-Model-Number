#include <iostream>
#include <cstring>
#include <cstdlib>
#include <limits>

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

    do//do while loop used to catch errors from user
    {
        index = 0;

        //get user input
        cout << "To return to the Main Menu, type -1. \n";
        cout << "Type a year of Manufacture from 1998-2018:  ";
        cin >> year;
        while(cin.fail())
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Invalid entry. Enter a number: ";
                cin >> year;
            }

        if (year == 1998){
            strcat(filterType, "98");//write to string
            index++;//increment index to break loop, as no user error has occurred
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

        else{ //Exception to catch user errors
            system("cls");
            cout << "Error, please enter a year between 1998 and 2018. \n"<<endl;
        }
    } while(index == 0);

    return year;
}

//Function to get the number of Cylinders from the user and write the info
//to the C-String
int numCylinderEdsel(char filterType[])
{
    system("cls");
    int index = 0; //Index used to catch user errors
    int numCylinders;

    do
    {
        //display prompt
        cout << "To return to the Main Menu, type -1. \n";
        cout << "Enter the number of Cylinders of your Model.(6 or 8):  ";
        cin >> numCylinders; //user input
        while(cin.fail())
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Invalid entry. Enter a number: ";
                cin >> numCylinders;
            }

        if (numCylinders == 6){
            strcat(filterType, "06");//adding cylinder type to the C-String
            index++;//increment to break loop
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
    }while(index == 0);

    return numCylinders;

}

//Function to get the number of Cylinders from the user and write the info
//to the C-String
int numCylinderAustin(char filterType[])//see comments for previous function
{
    system("cls");
    int index;
    int numCylinders;

    do
    {
        index = 0;
        cout << "To return to the Main Menu, type -1. \n";
        cout << "Enter the number of Cylinders of your Model(4 or 6):  ";
        cin >> numCylinders;
        while(cin.fail())
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Invalid entry. Enter a number: ";
                cin >> numCylinders;
            }

        if (numCylinders == 4){
            strcat(filterType, "04");
            index ++;
        }
        else if (numCylinders == 6){
            strcat(filterType, "06");
            index ++;
        }
        else if (numCylinders == -1){//Used to return to the Main Menu
            index++;
            mainMenu(filterType); //Main Menu Function
        }
        else
        {
            system("cls");
            cout << "Error, invalid entry. Please enter 4 or 6. \n" <<endl;
        }
    } while (index == 0);
    return numCylinders;
}

//Function to get the number of Cylinders from the user and write the info
//to the C-String
int numCylinderCatepiller(char filterType[])//see comments for previous function
{
    system("cls");
    int index;
    int numCylinders;

    do
    {
        index = 0;
        cout << "To return to the Main Menu, type -1. \n";
        cout << "Enter the number of Cylinders of your Model(15 or 20):  ";
        cin >> numCylinders;
        while(cin.fail())
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Invalid entry. Enter a number: ";
                cin >> numCylinders;
            }

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

//Function to get the number of Cylinders from the user and write the info
//to the C-String
int numCylinderJaguar(char filterType[])//see comments for previous function
{
    system("cls");
    int index;
    int numCylinders;

    do
    {
        index = 0;
        cout << "To return to the Main Menu, type -1. \n";
        cout << "Enter the number of Cylinders of your Model(6 or 12):  ";
        cin >> numCylinders;
        while(cin.fail())
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Invalid entry. Enter a number: ";
                cin >> numCylinders;
            }

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
    int index = 0; //Index used to catch errors from user
    int numCylinders;
    system("cls");
    bool ret;

    while (index ==0)
    {

            int choice;//Declare user input
            const int EDSEL = 1,//Declare constants for switch statement
                    AUSTIN = 2,
                    CATEPILLER = 3,
                    JAGUAR = 4,
                    QUIT = 5;

                cout << "\tSelect the Make of your Vehicle\n\n"//Display Menu
                    << "1. Edsel \n"
                    << "2. Austin \n"
                    << "3. Catepiller \n"
                    << "4. Jaguar \n"
                    << "5. Quit \n\n";
                cout << "Enter your Choice: ";

                cin >> choice;//User Input
                while(cin.fail())
                {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    cout << "Invalid entry. Enter a number: ";
                    cin >> choice;
                }


        switch(choice)
        {
            case EDSEL:
                index++;//To break loop because of accurate answer
                filterType[0] = 'E';
                filterType[1] = '\0';
                year = yearOfManufacture(filterType);//Get data from year function
                    if (year == -1)
                        break; //To break out of current statement, so as not to create a repetition after mainMenu(filterType) is reiterated.
                numCylinders = numCylinderEdsel(filterType);
                    if (numCylinders == -1)
                        break;//To break out of current statement, so as not to create a repetition after mainMenu(filterType) is reiterated.

                //Display results
                cout << "\n\nThe vehicle make that you selected was an Edsel, ";
                cout << "the year that you selected was " << year<< ",";
                cout << "\nand the number of cylinders that you selected was " << numCylinders<<".";
                cout << "\nThe filter you are looking for is #" <<filterType<<"\n\n";
                ret = true; //to affect looping in int main()
                break;

            case AUSTIN://See Comments for Previous Case
                index++;
                filterType[0] = 'A';
                filterType[1] = '\0';
                year = yearOfManufacture(filterType);
                    if (year == -1)
                        break;
                numCylinders = numCylinderAustin(filterType);
                    if (numCylinders == -1)
                        break;
                cout << "\n\nThe vehicle make that you selected was an Austin, ";
                cout << "the year that you selected was " << year<< ",";
                cout << "\nand the number of cylinders that you selected was " << numCylinders<<".";
                cout << "\nThe filter you are looking for is #" <<filterType<<"\n\n";
                ret = true;
                break;
            case CATEPILLER://See Comments for Previous Case
                ret = true;
                index++;
                filterType[0] = 'C';
                filterType[1] = '\0';
                year = yearOfManufacture(filterType);
                if (year == -1)
                    break;
                numCylinders = numCylinderCatepiller(filterType);
                if (numCylinders == -1)
                    break;
                cout << "\n\nThe vehicle make that you selected was a Catepiller, ";
                cout << "the year that you selected was " << year<< ",";
                cout << "\nand the number of cylinders that you selected was " << numCylinders<<".";
                cout << "\nThe filter you are looking for is #" <<filterType<<"\n\n";
                ret = true;
                break;

            case JAGUAR://See Comments for Previous Case
                index++;
                filterType[0] = 'J';
                filterType[1] = '\0';
                year = yearOfManufacture(filterType);
                    if (year == -1)
                        break;
                numCylinders = numCylinderJaguar(filterType);
                    if (numCylinders == -1)
                        break;
                cout << "\n\nThe vehicle make that you selected was a Jaguar, ";
                cout << "the year that you selected was " << year<< ",";
                cout << "\nand the number of cylinders that you selected was " << numCylinders<<".";
                cout << "\nThe filter you are looking for is #" <<filterType<<"\n\n";
                ret = true;
                break;

            case QUIT:
                index++;//incremented to escape current while loop
                system("cls");
                cout << "Program Quitting.";//Display quit statement to user
                ret = false;//To affect loop in int main()
                return ret;//end function
                break;

            default://no index increment, current while loop will repeat.
                system("cls");
                cout << "Error, please select from choices 1-4.\n"<<endl;
                break;

        }

    }

    return ret;

}

