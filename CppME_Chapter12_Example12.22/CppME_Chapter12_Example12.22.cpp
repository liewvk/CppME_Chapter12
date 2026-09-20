#include <iostream>
using namespace std;

void byValue(int x)
{
    x = 50;
}

void byReference(int& x)
{
    x = 50;
}

int main()
{
    int num1 = 10;
    int num2 = 10;

    byValue(num1);
    byReference(num2);

    cout << "After byValue     : " << num1 << endl;
    cout << "After byReference : " << num2 << endl;

    return 0;
}
