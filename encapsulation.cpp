// binding methods and variables together into a single unit - class
// data is only accessible to class methods
// also leads to data abstraction [hiding]
// class - abstract data type

// Abstraction : Implementation details are hidden
//  Only essential details are displayed
#include <iostream>
using namespace std;
class A
{
    int num;

public:
    int y;
    int get()
    {
        num = 4;
        cout << "Value of num is : " << num << endl;
        return y;
    }
    void set(int a)
    {
        y = a;
    }
};
class B
{
public:
    int z = 15;
    virtual int getval() = 0;
};
class C : public B
{
public:
    int getval()
    {
        return z;
    }
};
int main()
{
    A obj;
    // obj.num; pvt member can't be accessed - encapsulation
    obj.set(5);
    cout << obj.get();
    C objj;
    cout << endl
         << objj.getval();
}
