#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_Number;

public:
    void setRollNumber(int);
    void getRollNumber(void);
};

void Student ::setRollNumber(int n)
{
    roll_Number = n;
}

void Student::getRollNumber()
{
    cout << "Roll Number :" << roll_Number << endl;
}

// <---------------------------->

class Exam : public Student
{
protected:
    float math;
    float physics;

public:
    void SetMarks(float, float);
    void GetMarks(void);
};

void Exam ::SetMarks(float m1, float m2)
{
    math = m1;
    physics = m2;
}

void Exam ::GetMarks()
{
    // getRollNumber();
    cout << "The marks Obtain in Math : " << math << endl;
    cout << "The marks Obtain in Physics : " << physics << endl;
}

// <---------------------------->

class result : public Exam
{
    float percentage;

public:
    void display(void)
    {
        percentage = (math + physics) / 2;
        getRollNumber();
        GetMarks();
        cout << "Your Persentage is : " << percentage << " %" << endl;
    }
};

/*
 Note:
    If we are Inheriting B from A and C form B [ A ---> B ---> C ]

    1. A is the base class for B and B is the base class for C.
    2. A ---> B ---> C is called Inheritance Path.

*/

int main()
{
    result Gaurav;
    Gaurav.setRollNumber(71);
    Gaurav.SetMarks(94, 90);
    Gaurav.display();
    return 0;
}