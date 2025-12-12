#include <iostream>

using namespace std;

class Device
{
protected:
    int power;

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

    void setPowercon(int p)
    {
        powerConsumption = p;
    }

    char *getBrand()
    {
        return brand;
    }

    int getPowercon()
    {
        return powerConsumption;
    }

    virtual float calculateDiscount()
    {
        return 0;
    }

    void setPower(int p)
    {
        power = p;
    }

    int getPower()
    {
        return power;
    }
};

class Laptop : public Device
{
public:
    void displayLaptop()
    {
        cout << "Laptop Brand: " << getBrand() << endl;
        cout << "Laptop Power: " << getPowercon() << "W" << endl;
        cout << endl;
    }

    float calculateDiscount()
    {
        return power * 0.1;
    }
};

class Smartphone : public Device
{
public:
    void displayPhone()
    {
        cout << "Smartphone Brand: " << getBrand() << endl;
        cout << "Smartphone Power: " << getPowercon() << "W" << endl;
        cout << endl;
    }

    float calculateDiscount()
    {
        return power * 0.05;
    }
};

int main()
{
    Laptop lp;
    Smartphone sp;

    char lp1[50], lp2[50];
    int p1, p2;

    cout << "Enter laptop brand: ";
    cin >> lp1;

    cout << "Enter laptop power: ";
    cin >> p1;

    cout << endl;

    lp.setBrand(lp1);
    lp.setPowercon(p1);

    cout << "Enter phone brand: ";
    cin >> lp2;

    cout << "Enter phone power: ";
    cin >> p2;

    cout << endl;

    sp.setBrand(lp2);
    sp.setPowercon(p2);

    cout << endl << "------Device Information ------" << endl;
    lp.displayLaptop();
    sp.displayPhone();

    cout << "Laptop power: ";
    cin >> p1;

    cout << "Phone power: ";
    cin >> p2;

    lp.setPower(p1);
    sp.setPower(p2);

    Device *d[2];
    d[0] = &lp;
    d[1] = &sp;

    cout << endl << "Laptop Discount: " << d[0]->calculateDiscount() << endl;
    cout << "Phone Discount: " << d[1]->calculateDiscount() << endl;

    return 0;
}
