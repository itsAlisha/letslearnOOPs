#include <iostream>
using namespace std;
class Student
{
public:
    int student_id;
    string student_name;
    float marks;
    Student(int id, string n, float marks = 100)
    {
        student_id = id;
        student_name = n;
        this->marks = marks;
    }
    void Stu_Marks()
    {
        cout << "Student " << student_name << " has got marks of " << marks;
    }
};
int main()
{
    Student s(1, "Aashray");
    s.Stu_Marks();
}