#include <iostream>
using namespace std;
class A
{
public:
    int x;
    A(int y)
    {
        x = y;
    }
    void print(A &obj);
    ~A() {}
};
void A ::print(A &obj)
{
    cout << obj.x;
}
int main()
{
    A a(5);
    a.print(a);
}