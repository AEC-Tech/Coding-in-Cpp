
#include <iostream>
using namespace std;
class Student
{
    char name[20];
    int marks;
    public:
    void input()
    {
        cout<<"Enter Student Name and  Marks : ";
        cin>>name>>marks;
    }
    void show()
    {
        cout<<"Name is "<<name<<endl;
        cout<<"Marks : "<<marks<<endl;
    }
};
int main() {
    int n,i;
    Student *a[10];
    cout<<"How many students are there : ";
    cin>>n;
    cout<<"Enter the Student Details : ";
    for(i=0;i<n;i++)
    {
        a[i] = new Student;
        a[i]->input();
    }
    cout<<"Entered Students are : ";
    for(i=0;i<n;i++)
        a[i]->show();
    
    return 0;
}
