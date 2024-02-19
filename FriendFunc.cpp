// non member func or a func outside the class or belonging to some other class which can access the private members of the class
#include <iostream>
using namespace std;
class A
{
    int x;

public:
    A(int y)
    {
        x = y;
    }
    friend void print(A &obj);
    ~A() {}
};
void print(A &obj)
{
    cout << obj.x;
}
int main()
{
    A a(5);
    print(a);
}