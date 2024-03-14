#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    complex(void);
    void printdata()
    {
        cout << "your number is" << a << "+" << b << "i" << endl;
    }
};
complex ::complex(void)
{
    a = 10;
    b = 9;
}
int main()
{
    complex c;
    c.printdata();

    return 0;
}