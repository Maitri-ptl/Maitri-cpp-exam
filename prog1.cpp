#include <iostream>

using namespace std;

class Student {
private:
    char name[50];
    int rollNumber;

public:
    Student() {}

    Student(char n[], int rn) 
    {
        int i = 0;
        while (n[i] != '\0') 
        {
            name[i] = n[i];
            i++;
        }
        name[i] = '\0';
        rollNumber = rn;
    }

    void display() 
    {
        cout << endl <<"Student's Name is: " << name << endl;
        cout <<"Student's Roll is: " << rollNumber << endl;
    }
};

int main() 
{
    Student s[3];

    char n[50];
    int rn;

    for (int i = 0; i < 3; i++) 
    {
        cout << "Enter name: ";
        cin >> n;

        cout << "Enter roll: ";
        cin >> rn;

        cout<< endl;

        s[i] = Student(n, rn);
    }

    for (int i = 0; i < 3; i++) 
    {
        s[i].display();
    }

    return 0;
}
