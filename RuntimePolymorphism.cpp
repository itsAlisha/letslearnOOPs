#include <iostream>
using namespace std;
class Parent
{
public:
    virtual void shout()
    {
        cout << "Parent class" << endl;
    }
    void shout2()
    {
        cout << "Parent class" << endl;
    }
};
class Child : public Parent
{
public:
    void shout()
    {
        cout << "Child class" << endl;
    }
    void shout2()
    {
        cout << "Child class" << endl;
    }
};
int main()
{
    Parent *p;
    Child c;
    p = &c;
    p->shout();
    p->shout2();
}
// Compile Time                      | Runtime
// 1. Func. and Operator Overloading | Function Overriding
// 2. fast                           | slow
// 3. memory efficient               | memory inefficient
// 4. func name same but params diff  | func names and params same
