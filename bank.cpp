// Implementing Bank Class
#include <iostream>
using namespace std;

class Bank
{
  int accno;
  char name[30];
  int balance;
  public:
  void input()
  {
      cout<<"Enter account no. : ";
      cin>>accno;
      cout<<"Enter Name : ";
      cin>>name;
      cout<<"Enter Balance : ";
      cin>>balance;
  }
  void show()
  {
      cout<<"Account No. "<<accno<<endl;
      cout<<"Name is "<<name<<endl;
      cout<<"Balance is "<<balance<<endl;
  }
  void deposit()
  {
      int amt;
      cout<<"Enter amount to be deposited : ";
      cin>>amt;
      balance += amt;
      cout<<"Deposited !!!"<<endl;
      cout<<"Updated Balance is "<<balance<<endl;
  }
  void withdraw()
  {
      int amt;
      cout<<"Enter amount to be withdrawn : ";
      cin>>amt;
      if(amt <= balance)
      {
      balance -= amt;
      cout<<"Collect your cash"<<endl;
      cout<<"Updated Balance is "<<balance<<endl;
      }
      else
      cout<<"Insufficient Balance"<<endl;
  }
};
int main() {
    
    Bank bk;
    bk.input();
    bk.show();
    bk.deposit();
    bk.withdraw();
    bk.show();
    

    return 0;
}
