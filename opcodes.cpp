#include "header.hpp"

/**
 * menu[5][2]={
        {"1", "Sell a Car"},
        {"2", "Add a Car"},
        {"3", "Today's sales"},
        {"4", "Catalog"},
        {"5", "Settings"},
        //6, search car by spec
    };
*/
void formatInput(string *input)
{
    if (islower((*input)[0]))
    {
        (*input)[0] -= 32;
    }
}

/**
 * sellCar - This function performs a sell car operation.
 * return: nothing
 */
void sellCar()
{

}

/**
 * addCar - This function adds a car.
 * return: nothing
 */
void addCar()
{
    string brand, model;
    string Hp, Engine, Fuel, SafetyTest, Weight, Ltrmile;

    cout << "*VEHICLE INFORMATION*\n";
    cout << "Enter Brand: ";
    cin >> brand;
    formatInput(&brand);
    cout << "Enter Model: ";
    cin >> model;
    formatInput(&model);
    cout << "\n-SPECIFICATIONS-\n";
    cout << "~Horse Power: ";
    cin >> Hp, Hp += "Hp";
    cout << "~Engine: ";
    cin >> Engine, Engine += " engine";
    cout << "~Fuel: ";
    cin >> Fuel;
    formatInput(&Fuel);
    cout << "~Safety Rating: ";
    cin >> SafetyTest, SafetyTest += " Star";
    cout << "~Weight(Kg): ";
    cin >> Weight;
    cout << "~Ltrmile: ";
    cin >> Ltrmile;

    //Model newModel;
}

/**
 * salesToday - This function displays all sales made for the day.
 * return: nothing
 */
void salesToday()
{
    cout<<"SAES TODAY";
}

/**
 * catalog - This function displays all cars.
 * return: nothing
 */
void catalog()
{
    cout<<"CATALOG";
}

/**
 * settings - This function edits company info.
 * return: nothing
 */
void settings()
{
    cout<<"SETTINGS";
}

void (*operations[5])() = {sellCar, addCar, salesToday, catalog, settings};