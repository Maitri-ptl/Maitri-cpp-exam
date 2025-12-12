#include <iostream>

using namespace std;

class Car 
{
private:
    char model[50];
    int year;
    int speed;

public:
    void setModel(char mdl[]) 
    {
        int i = 0;
        while (mdl[i] != '\0') 
        {
            model[i] = mdl[i];
            i++;
        }
        model[i] = '\0';
    }

    void setYear(int yr) {
        year = yr;
    }

    void setSpeed(int s) 
    {
        speed = s;
    }

    char* getModel() 
    {
        return model;
    }

    int getYear() 
    {
        return year;
    }

    int getSpeed() 
    {
        return speed;
    }
};

int main() 
{
    Car c;

    char mdl[50];
    int yr, s;

    cout << "Enter model: ";
    cin >> mdl;

    cout << "Enter year: ";
    cin >> yr;

    cout << "Enter speed: ";
    cin >> s;

    c.setModel(mdl);
    c.setYear(yr);
    c.setSpeed(s);

    cout << endl <<"Car Details"<<endl;
    cout << "Model: " << c.getModel() << endl;
    cout << "Year: " << c.getYear() << endl;
    cout << "Speed: " << c.getSpeed()<< "km/hr" << endl;

    return 0;
}
