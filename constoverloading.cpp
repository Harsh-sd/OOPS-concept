#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    complex(int, int);
    complex(int);
    void printdata()
    {
        cout << "your number is" << a << "+" << b << "i" << endl;
    }
};

complex ::complex(int a1, int b1)
{
    a = a1;
    b = b1;
}
complex ::complex(int c1)
{
    a = c1;
}

int main()
{
    complex c(4, 6);
    c.printdata();
    complex c(10);
    c.printdata();
    return 0;
}