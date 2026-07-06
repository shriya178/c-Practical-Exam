#include <iostream>
using namespace std;

class Device
{
private:
    string brand;
    int powerConsumption;

public:
    void setData(string b, int p)
    {
        brand = b;
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

    virtual void calculateDiscount()
    {
        cout << "General Device Discount" << endl;
    }
};

class Laptop : public Device
{
public:
    void calculateDiscount()
    {
        cout << "Laptop Brand: " << getBrand() << endl;
        cout << "Power Consumption: " << getPowerConsumption() << " Watt" << endl;
        cout << "Discount: 10%" << endl;
    }
};

class Smartphone : public Device
{
public:
    void calculateDiscount()
    {
        cout << "Smartphone Brand: " << getBrand() << endl;
        cout << "Power Consumption: " << getPowerConsumption() << " Watt" << endl;
        cout << "Discount: 5%" << endl;
    }
};

int main()
{
    Laptop l;
    Smartphone s;

    l.setData("Dell", 65);
    s.setData("Samsung", 25);

    Device *d[2];

    d[0] = &l;
    d[1] = &s;

    for (int i = 0; i < 2; i++)
    {
        d[i]->calculateDiscount();
        cout << endl;
    }

    return 0;
}