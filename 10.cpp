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
    
    int smallest=ar[0],largest=ar[0];
    for(int i=1;i<size;i++)
    {
        if(smallest>ar[i])
        smallest=ar[i];
        if(largest<ar[i])
        largest=ar[i];
    }

    cout<<"largest number: "<<largest<<endl;
    cout<<"smallest number: "<<smallest<<endl;

    return 0;
}