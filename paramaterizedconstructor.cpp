#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    // always declares in public section of the class
    complex(int, int);
    void printdata()
    {
        cout << "your number is" << a << "+" << b << "i" << endl;
    }
};
// this is called paramaterized constructor ,it takes two parameters
complex ::complex(int a1, int b1)
{
    a = a1;
    b = b1;
}

// Does not have any return type
int main()
{
    // complex c=complex(4,6); explicit call
    complex c(4, 6);
    c.printdata();

    return 0;
}
