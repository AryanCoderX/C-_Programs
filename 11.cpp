#include<iostream>
using namespace std;
int main()
{
    int size,target;
    cout<<"Enter size of Array\n";
    cin>>size;
    int ar[size];
    cout<<"Enter the elements of the array\n";
    for(int i=0;i<size;i++)
    cout<<"Enter target value\n";
    cin>>ar[i];
    cin>>target;
    bool check=false;
    
    for(int i=0;i<size;i++)
    {
        if(ar[i]==target)
        {
            check=true;
            break;
        }  
    }

    if(check)
        cout<<"Target value found\n";
    else
        cout<<"Target value not found\n";


    return 0;
}