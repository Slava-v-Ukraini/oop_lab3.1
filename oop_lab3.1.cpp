#include "Student.h"
#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Student s;
    cin >> s;
    cout << s << endl;
    return 0;
}