#include <iostream>
using namespace std;

int main()
{
    int num = 30;
    int& ref = num;

    cout << "num address = " << &num << endl;
    cout << "ref address = " << &ref << endl;

    return 0;
}
