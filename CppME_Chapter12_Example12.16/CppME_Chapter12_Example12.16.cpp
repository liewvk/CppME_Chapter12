#include <iostream>
using namespace std;

int main()
{
    int marks = 80;
    int& score = marks;

    cout << "marks = " << marks << endl;
    cout << "score = " << score << endl;

    score = 95;

    cout << "marks = " << marks << endl;
    cout << "score = " << score << endl;

    return 0;
}
