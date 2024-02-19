#include <iostream>
using namespace std;
class Parent1
{
    int num;

public:
    Parent1()
    {
        cout << "Parent1 Class" << endl;
    }
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
class Parent2
{
    int num;

public:
    Parent2()
    {
        cout << "Parent2 Class" << endl;
    }
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
class Child1 : public Parent2, public Parent1
{
public:
    Child1()
    {
        cout << "Child1 class" << endl;
    }
}; // single level inheritance and multiple upto here
class Child2 : public Parent2, public Parent1
{
public:
    Child2()
    {
        cout << "Child class" << endl;
    }
};
// class Grandchild : public Child
// {
// public:
//     Grandchild()
//     {
//         cout << "Grandchild class" << endl;
//     }
// }; // multi level inheritance upto here
int main()
{
    Child1 obj1; // calls parent than child
    Child2 obj2; // calls parent than child
    // Hierarchial
    // Hybrid : Hierarchial + Multiple
}
// Parent 1  Parent 2
//      \    /
//      Child1,2