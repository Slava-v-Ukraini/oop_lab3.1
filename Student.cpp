#include "Student.h"

Student::Student(string name, int age, char gender, float weight, int year)
    : Man(name, age, gender, weight), year(year) {}

int Student::getYear() const { return year; }
void Student::setYear(int newYear) { year = newYear; }
void Student::incrementYear() { year++; }

ostream& operator<<(ostream& out, const Student& s) {
    out << static_cast<const Man&>(s);
    out << ", Рік навчання: " << s.year;
    return out;
}

istream& operator>>(istream& in, Student& s) {
    in >> static_cast<Man&>(s);
    cout << "Введіть рік навчання: ";
    in >> s.year;
    return in;
}
