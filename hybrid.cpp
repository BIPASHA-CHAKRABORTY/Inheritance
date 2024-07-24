#include <iostream>
using namespace std;

class Student
{
protected:
    char name[20];
    int rollNo;
public:
    void input()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter roll number: ";
        cin >> rollNo;
    }
};

class Test : public Student {
protected:
    float m1, m2, m3, avg;
public:
    void input()
   {
        cout << "Enter marks for subject 1: ";
        cin >> m1;
        cout << "Enter marks for subject 2: ";
        cin >> m2;
        cout << "Enter marks for subject 3: ";
        cin >> m3;
        avg = (m1 + m2 + m3) / 3;

    }
};

class Sports 
{
protected:
    float score;
public:
    void input() 
{
        cout << "Enter sports score: ";
        cin >> score;
    }
};

class Result : public Test, public Sports {
public:
    void display()
    {
     cout<<" your name:"<<name;
     cout<<" your roll no.:"<<rollNo;
     cout<<"your marks:"<<m1<<m2<<m3;
     cout<<"Avg of all of ur sub:"<<avg;
     cout<<"your pt score:"<<score;
    }
};

int main()
{
    Result r;
    r.Student::input();
    r.Test::input();
    r.Sports::input();
    r.display();
    return 0;
}
