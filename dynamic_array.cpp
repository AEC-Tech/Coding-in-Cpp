
#include <iostream>
using namespace std;
int main() {
    int n,*a,i;
    cout<<"How many numbers are there : ";
    cin>>n;
    a = new int[n];
    cout<<"Enter the numbers : ";
    for(i=0;i<n;i++)
        cin>>a[i];
    cout<<"Entered Numbers are : ";
    for(i=0;i<n;i++)
    cout<<a[i]<<endl;
    delete a;
    return 0;
}
