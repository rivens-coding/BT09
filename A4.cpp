#include <iostream>

using namespace std;

int main()
{
    int a = 10;
    int* b = new int;
    b = &a;
    delete b;
    cout << a;
    //lỗi k in ra giá trị a
    return 0;
}
