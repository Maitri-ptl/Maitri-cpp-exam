#include <iostream>

using namespace std;

class Device {
private:
    char brand[50];
    int powerConsumption;

public:
    void setBrand(char b[]) 
    {
        int i = 0;
        while (b[i] != '\0') 
        {
            brand[i] = b[i];
            i++;
        }
        brand[i] = '\0';
    }

    void setPower(int p) 
    {
        powerConsumption = p;
    }

    char* getBrand() 
    {
        return brand;
    }

    int getPower() 
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
        cout << "Laptop Power: " << getPower() << "W" << endl;
        cout<<endl;
    }
};

class Smartphone : public Device 
{
public:
    void displayPhone() {
        cout << "Smartphone Brand: " << getBrand() << endl;
        cout << "Smartphone Power: " << getPower() << "W" << endl;
        cout<<endl;
    }
};

int main() {
    Laptop lp;
    Smartphone s;

    char lp1[50], lp2[50];
    int p1, p2;

    cout << "Enter laptop brand: ";
    cin >> lp1;

    cout << "Enter laptop power: ";
    cin >> p1;

    cout<<endl;

    lp.setBrand(lp1);
    lp.setPower(p1);

    cout << "Enter phone brand: ";
    cin >> lp2;

    cout << "Enter phone power: ";
    cin >> p2;

    cout<<endl;

    s.setBrand(lp2);
    s.setPower(p2);

    cout << endl <<"------Device Information ------"<<endl;
    lp.displayLaptop();
    s.displayPhone();

    return 0;
}
