#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter size of Array\n";
    cin>>size;
    int ar[size];
    cout<<"Enter the elements of the array\n";
    for(int i=0;i<size;i++)
    cin>>ar[i];
    
    int product=1,sum=0;
    for(int i=1;i<size;i++)
    {
        product*=ar[i];
        sum+=ar[i];
    }

    cout<<"Sum of all number: "<<sum<<endl;
    cout<<"Product of all number: "<<product<<endl;

    return 0;
}