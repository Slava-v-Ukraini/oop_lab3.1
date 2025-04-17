#include "Man.h"
#include <stdexcept>

Man::Man(string name, int age, char gender, float weight)
    : name(name), age(age), gender(gender), weight(weight) {
    if (age < 0) {
        cerr << "�������: �� �� ���� ���� ��'�����." << endl;
        exit(1);
    }
    if (weight <= 0) {
        cerr << "�������: ���� �� ���� ��������." << endl;
        exit(1);
    }
    if (gender != 'm' && gender != 'f') {
        cerr << "�������: ����� �� ���� 'm' ��� 'f'." << endl;
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
        cerr << "�������: ���� �� ���� ��������." << endl;
        exit(1);
    }
    weight = newWeight;
}

ostream& operator<<(ostream& out, const Man& m) {
    out << "��'�: " << m.name << ", ³�: " << m.age << ", �����: " << m.gender << ", ����: " << m.weight;
    return out;
}

istream& operator>>(istream& in, Man& m) {
    cout << "������ ��'�: ";
    in >> m.name;
    cout << "������ ��: ";
    in >> m.age;
    if (m.age < 0) {
        cerr << "�������: �� �� ���� ���� ��'�����." << endl;
        exit(1);
    }
    cout << "������ ����� (m/f): ";
    in >> m.gender;
    if (m.gender != 'm' && m.gender != 'f') {
        cerr << "�������: ����� �� ���� 'm' ��� 'f'." << endl;
        exit(1);
    }
    cout << "������ ����: ";
    in >> m.weight;
    if (m.weight <= 0) {
        cerr << "�������: ���� �� ���� ��������." << endl;
        exit(1);
    }
    return in;
}