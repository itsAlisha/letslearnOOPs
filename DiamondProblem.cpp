#include <iostream>
using namespace std;
class GrandParent
{
public:
    GrandParent()
    {
        cout << "GrandParent class" << endl;
    }
};
class Parent1 : virtual public GrandParent
{
    int num;

public:
    Parent1()
    {
        cout << "Parent1 Class" << endl;
    }
    int y;
};
class Parent2 : virtual public GrandParent
{
    int num;

public:
    Parent2()
    {
        cout << "Parent2 Class" << endl;
    }
    int y;
};
class Child : public Parent1, public Parent2
{
public:
    Child()
    {
        cout << "Child1 class" << endl;
    }
};

int main()
{
    Child obj;
    // Grandparent constructor called twice
}