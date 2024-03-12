#include <iostream>
using namespace std;
struct employee
{
    int id;
    int salary;
    char favchar;
};

int main()
{
    struct employee harry;
    harry.salary = 2000;
    harry.id = 1;
    harry.favchar = 'C';

    cout << "the salary of employee is" << harry.salary << endl;
    cout << "the id of employee is" << harry.id << endl;
    cout << "the favchar of employee is" << harry.favchar << endl;
    return 0;
}