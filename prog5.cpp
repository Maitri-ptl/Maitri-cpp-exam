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
        cout << "Lion rule on jungle land" << endl;
    }
};

class Fish : public Animal 
{
public:
    void makeSound() 
    {
        cout << "Fish makes bubbling sound" << endl;
    }
    void move() 
    {
        cout << "Fish swims in water" << endl;
    }
};

int main() 
{
    Animal* a[2];
    a[0] = new Lion();
    a[1] = new Fish();

    for(int i = 0; i < 2; i++) 
    {
        cout<<endl;
        a[i]->makeSound();
        a[i]->move();
        cout<<endl;
    }

    return 0;
}
