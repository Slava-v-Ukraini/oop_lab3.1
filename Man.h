#pragma once
#include <string>
#include <iostream>
using namespace std;

class Man {
private:
    string name;
    int age;
    char gender;
    float weight;

public:
    Man(string name = "", int age = 0, char gender = 'm', float weight = 1.0);

    string getName() const;
    int getAge() const;
    char getGender() const;
    float getWeight() const;

    void setName(string newName);
    void setAge(int newAge);
    void setWeight(float newWeight);

    friend ostream& operator<<(ostream& out, const Man& m);
    friend istream& operator>>(istream& in, Man& m);
};