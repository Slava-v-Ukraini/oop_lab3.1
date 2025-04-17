#include "Man.h"
#include <stdexcept>

Man::Man(string name, int age, char gender, float weight)
    : name(name), age(age), gender(gender), weight(weight) {
    if (age < 0) {
        cerr << "Помилка: вік не може бути від'ємним." << endl;
        exit(1);
    }
    if (weight <= 0) {
        cerr << "Помилка: вага має бути додатною." << endl;
        exit(1);
    }
    if (gender != 'm' && gender != 'f') {
        cerr << "Помилка: стать має бути 'm' або 'f'." << endl;
        exit(1);
    }
}

string Man::getName() const { return name; }
int Man::getAge() const { return age; }
char Man::getGender() const { return gender; }
float Man::getWeight() const { return weight; }

void Man::setName(string newName) { name = newName; }
void Man::setAge(int newAge) { age = newAge; }
void Man::setWeight(float newWeight) {
    if (newWeight <= 0) {
        cerr << "Помилка: вага має бути додатною." << endl;
        exit(1);
    }
    weight = newWeight;
}

ostream& operator<<(ostream& out, const Man& m) {
    out << "Ім'я: " << m.name << ", Вік: " << m.age << ", Стать: " << m.gender << ", Вага: " << m.weight;
    return out;
}

istream& operator>>(istream& in, Man& m) {
    cout << "Введіть ім'я: ";
    in >> m.name;
    cout << "Введіть вік: ";
    in >> m.age;
    if (m.age < 0) {
        cerr << "Помилка: вік не може бути від'ємним." << endl;
        exit(1);
    }
    cout << "Введіть стать (m/f): ";
    in >> m.gender;
    if (m.gender != 'm' && m.gender != 'f') {
        cerr << "Помилка: стать має бути 'm' або 'f'." << endl;
        exit(1);
    }
    cout << "Введіть вагу: ";
    in >> m.weight;
    if (m.weight <= 0) {
        cerr << "Помилка: вага має бути додатною." << endl;
        exit(1);
    }
    return in;
}