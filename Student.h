#pragma once
#include "Man.h"

class Student : public Man {
private:
    int year;

public:
    Student(string name = "", int age = 0, char gender = 'm', float weight = 1.0, int year = 1);

    int getYear() const;
    void setYear(int newYear);
    void incrementYear();

    friend ostream& operator<<(ostream& out, const Student& s);
    friend istream& operator>>(istream& in, Student& s);
};