#include <iostream>
using namespace std;

void addBonus(int& mark)
{
    mark += 5;
}

int main()
{
    int studentMark = 78;

    cout << "Before bonus: " << studentMark << endl;

    addBonus(studentMark);

    cout << "After bonus : " << studentMark << endl;

    return 0;
}
