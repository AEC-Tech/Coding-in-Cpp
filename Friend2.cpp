
#include <iostream>
using namespace std;
class Department; //Forward 
class Employee
{
    private:
    int empid,deptid,salary;
    char name[40];
    public:
    void input()
    {
        cout<<"Enter Employee Id : ";
        cin>>empid;
        cout<<"Enter Name : ";
        cin>>name;
        cout<<"Enter Salary : ";
        cin>>salary;
        cout<<"Enter Department Id : ";
        cin>>deptid;
    }
    void show()
    {
        cout<<"\n"<<empid<<"\t"<<name<<"\t"<<salary<<"\t"<<deptid<<endl;
    }
   friend void check(Employee,Department);
};

class Department
{
    private:
    int deptid;
    char dname[40];
    public:
    void input()
    {
        cout<<"Enter Department Id : ";
        cin>>deptid;
        cout<<"Enter Name of the Department : ";
        cin>>dname;
    }
    void show()
    {
        cout<<"\n"<<deptid<<"\t"<<dname<<endl;
    }
   friend void check(Employee,Department);
};
void check(Employee e, Department d)
{
    if (e.deptid == d.deptid)
        cout<<e.name<<" Works in "<<d.dname<<endl;
}
int main() {
    Employee e1,e2;
    Department d1;
    e1.input();
    e2.input();
    d1.input();
    check(e1,d1);
    check(e2,d1);
    return 0;
}
