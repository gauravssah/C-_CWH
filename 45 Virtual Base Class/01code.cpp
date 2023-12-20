#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_No;

public:
    void setRollNo(int n)
    {
        roll_No = n;
    }

    void printRollNo()
    {
        cout << "Your Roll No : " << roll_No << endl;
    }
};

class Test : virtual public Student
{
protected:
    float math;
    float physics;

public:
    void setMarks(float m1, float m2)
    {
        math = m1;
        physics = m2;
    }

    void printMarks(void)
    {
        cout << "Your Result is Here :" << endl
             << "Math : " << math << endl
             << "Physics : " << physics << endl;
    }
};

class Sports : public virtual Student
{
protected:
    float score;

public:
    void setScore(float sc)
    {
        score = sc;
    }

    void printScore(void)
    {
        cout << "Your PT score is : " << score << endl;
    }
};

class Result : public Test, public Sports
{
private:
    float total;

public:
    void display(void)
    {
        total = math + physics + score;
        printRollNo();
        printMarks();
        printScore();

        cout << "Your Total Score is : " << total << endl;
    }
};

int main()
{
    Result sohan;
    sohan.setRollNo(12);
    sohan.setMarks(99.9, 98.9);
    sohan.setScore(9);
    sohan.display();

    return 0;
}