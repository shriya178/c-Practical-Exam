#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void makeSound() = 0;
    virtual void move() = 0;
};

class Lion : public Animal
{
public:
    void makeSound()
    {
        cout << "Lion roars" << endl;
    }

    void move()
    {
        cout << "Lion walks on land" << endl;
    }
};

class Fish : public Animal
{
public:
    void makeSound()
    {
        cout << "Fish makes bubbles" << endl;
    }

    void move()
    {
        cout << "Fish Swims in water" << endl;
    }
};

int main()
{
    Lion l;
    Fish f;

    Animal *a[2];

    a[0] = &l;
    a[1] = &f;

    for (int i = 0; i < 2; i++)
    {
        a[i]->makeSound();
        a[i]->move();
        cout << endl;
    }

    return 0;
}