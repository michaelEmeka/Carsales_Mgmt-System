#include "header.hpp"
#define P 2

//virtual void Counter() = 0;
class Car
{
    string brand;
    string model;
    typedef struct specifications
    {
        string hp;
        string engine;
        string fuel;
        string safetyTest;
        string weight;
        string ltrmile;
    } specs;
    specs carSpec;
    //store brands
    vector <Car> brands = {};
    //each brand is a vector containing models
    

public:
    Car(string Brand, string Model, string Hp, string Engine, string Fuel, string SafetyTest, string Weight, string Ltrmile)
    {
        brand = Brand;
        model = Model;
        carSpec.hp = Hp;
        carSpec.engine = Engine;
        carSpec.fuel = Fuel;
        carSpec.safetyTest = SafetyTest;
        carSpec.weight = Weight;
        carSpec.ltrmile = Ltrmile;
    }
    //get Car Information - returns a 2D array.
    string (*(getCarInfo)())[P]
    {
        string Spec[][P] = {
            {"Brand", brand},
            {"Model", model},
            {"hp", carSpec.hp},
            {"engine", carSpec.engine},
            {"fuel", carSpec.fuel},
            {"Safety Rating", carSpec.safetyTest},
            {"Weight", carSpec.weight},
            {"ltr/mile", carSpec.ltrmile}
            };
        return Spec;
    }
};