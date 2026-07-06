#include <iostream>
using namespace std;

class Device
{
private:
    string brand;
    int powerConsumption;

public:
    void setBrand(string b)
    {
        brand = b;
    }

    void setPowerConsumption(int p)
    {
        powerConsumption = p;
    }

    string getBrand()
    {
        return brand;
    }

    int getPowerConsumption()
    {
        return powerConsumption;
    }
};

class Laptop : public Device
{
public:
    void displayLaptop()
    {
        cout << "Laptop Brand: " << getBrand() << endl;
        cout << "Power Consumption: " << getPowerConsumption() << " Watt" << endl;
    }
};

class Smartphone : public Device
{
public:
    void displaySmartphone()
    {
        cout << "Smartphone Brand: " << getBrand() << endl;
        cout << "Power Consumption: " << getPowerConsumption() << " Watt" << endl;
    }
};

int main()
{
    Laptop l;
    Smartphone s;

    l.setBrand("Dell");
    l.setPowerConsumption(65);

    s.setBrand("Samsung");
    s.setPowerConsumption(25);

    l.displayLaptop();
    cout << endl;
    s.displaySmartphone();

    return 0;
}