#include <iostream>
using namespace std;

class Student {
protected:
    char name;
    int rollNo;
public:
    void inputStudentDetails() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter roll number: ";
        cin >> rollNo;
    }
    void displayStudentDetails() {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNo << endl;
    }
};

class Test : public Student {
protected:
    float m1, m2, m3, avg;
public:
    void inputTestScores() {
        cout << "Enter marks for subject 1: ";
        cin >> m1;
        cout << "Enter marks for subject 2: ";
        cin >> m2;
        cout << "Enter marks for subject 3: ";
        cin >> m3;
        avg = (m1 + m2 + m3) / 3;
    }
    void displayTestScores() {
        cout << "Marks in subject 1: " << m1 << endl;
        cout << "Marks in subject 2: " << m2 << endl;
        cout << "Marks in subject 3: " << m3 << endl;
        cout << "Average Marks: " << avg << endl;
    }
};

class Sports {
protected:
    float score;
public:
    void inputSportsScore() {
        cout << "Enter sports score: ";
        cin >> score;
    }
    void displaySportsScore() {
        cout << "Sports Score: " << score << endl;
    }
};

class Result : public Test, public Sports {
public:
    void displayResult() {
        displayStudentDetails();
        displayTestScores();
        displaySportsScore();
    }
};

int main() {
    Result result;
    result.inputStudentDetails();
    result.inputTestScores();
    result.inputSportsScore();
    result.displayResult();
    return 0;
}
