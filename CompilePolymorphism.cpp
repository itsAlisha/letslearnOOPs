// objects or methods to tale different forms
// Function Overloading & Operator Overloading
// Function Overloading : Define a number of functions with same function name but perfrom differently acc to args passed
//(type or how many)
#include <iostream>
using namespace std;
// Function Overloading
/*
class A
{
public:
    int sum(int x, int y)
    {
        return x + y;
    }
    int sum(int x, int y, int z)
    {
        return x + y + z;
    }
    float sum(float x, float y)
    {
        return x + y;
    }
};
int main()
{
    A obj;
    cout << obj.sum(2, 3) << endl;
    cout << obj.sum(2, 3, 5) << endl;
    cout << obj.sum(float(2.3), float(3.5)) << endl;
}
*/
// Operator Overloading : additional meaning to Operator + operations on classes or objects
class A
{
public:
    int val;
    string value;
    A(string v)
    {
        value = v;
    }
    A(int v)
    {
        val = v;
    }
    A operator+(A const &obj2)
    {
        A obj1(val);
        obj1.value = value + obj2.value;
        return obj1;
    }
};
int main()
{
    A obj1("Hi");
    A obj2("There");
    A ans = obj1 + obj2;
    cout << ans.value << endl;
    A obj3(5);
    A obj4(7);
    A ans2 = obj3 + obj4;
    cout << ans2.val;
}
// Example 2 :
// Complex No.
// class Complex
// {
// public:
//     int real;
//     int img;
//     Complex(int r, int ig)
//     {
//         real = r;
//         img = ig;
//     }
//     Complex operator+(Complex &c2)
//     {
//         Complex ans(0, 0);
//         ans.real = real + c2.real;
//         ans.img = img + c2.img;
//         return ans;
//     }
// };
// int main()
// {
//     Complex c1(2, 3);
//     Complex c2(6, 5);
//     Complex c3 = c1 + c2;
//     cout << c3.real << " + i" << c3.img << endl;
// }