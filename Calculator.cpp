#include<iostream>
using namespace std;
int main()
{
   int a,b,c,n;
   cout<<"!!!!!CALCULATOR!!!!!"<<endl;
   cout<<"Enter the first number:";
   cin>>a;
   cout<<"Enter the second number:";
   cin>>b;
   cout<<"Press 1 - To Add"<<endl;
   cout<<"Press 2 - To Subtract"<<endl;
   cout<<"Press 3 - To Multiply"<<endl;
   cout<<"Press 4 - To Divide"<<endl;
   cout<<"Enter Your Choice:";
   cin>>n;
   switch(n){
      case 1:
         c=a+b;
         cout<<"The result is:"<<c;
         break;
      case 2:
         c=a-b;
         cout<<"The result is:"<<c;
         break;
      case 3:
         c=a*b;
         cout<<"The result is:"<<c;
         break;
      case 4:
         c=a/b;
         cout<<"The result is:"<<c;
         break;
      default:
         cout<<"Invalid Choice!!";
   }
   cout<<"      "<<endl;
   cout<<"THANK YOU!!"<<endl;
   cout<<"VISIT AGAIN!!";
   return 0;
}