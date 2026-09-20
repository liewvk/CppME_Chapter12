#include <iostream>
#include <string>
using namespace std;

struct Student
{
    string name;
    int age;
    char grade;
    double mark;
};

int main()
{
    Student s1 = { "Alice", 20, 'A', 88.0 };
    Student s2 = { "Brian", 21, 'B', 76.5 };

    cout << "Student 1: " << s1.name << ", " << s1.mark << endl;
    cout << "Student 2: " << s2.name << ", " << s2.mark << endl;

    return 0;
}
