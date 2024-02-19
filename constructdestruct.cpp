// called during obj creation
/// same name as class
// default, parametrized, copy

// Destructor called when obj is deleted
// no parameters
#include <iostream>
using namespace std;
class Emp_details
{
public:
    string Emp_name;
    float salary;
    Emp_details()
    {
        Emp_name = "Sahil";
        salary = 50000.00;
    }
    Emp_details(string n, float sal)
    {
        Emp_name = n;
        salary = sal;
    }
    Emp_details(Emp_details &e)
    {
        Emp_name = e.Emp_name;
        salary = e.salary;
    }
    ~Emp_details()
    {
        cout << "Emp_details of " << Emp_name << " deleted successfully" << endl;
    }
};

int main()
{
    Emp_details e1;
    Emp_details e2("Alisha", 60000.00);
    Emp_details e3 = e2;
    Emp_details *e4 = new Emp_details();
    cout << e4->Emp_name << " : " << e4->salary << endl;
    delete (e4);
    cout << e1.Emp_name << " : " << e1.salary << endl;
    cout << e2.Emp_name << " : " << e2.salary << endl;
    cout << e3.Emp_name << " : " << e3.salary << endl;
}