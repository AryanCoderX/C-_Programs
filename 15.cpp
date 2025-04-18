#include<iostream>
using namespace std;

void subarray(int ar[], int size)
{
    for(int i=0; i<size; i++)
    {
        for(int j=i;j<size;j++)
        {
            for(int k=i;k<=j;k++)
            cout<<ar[k];

            cout<<" ";
        }
        cout<<"\n";
    }
   
}

int main()
{
    int size;
    cout<<"Enter size of Array\n";
    cin>>size;
    int ar[size];
    cout<<"Enter the elements of the array\n";
    for(int i=0;i<size;i++)
    cin>>ar[i];

    subarray(ar,size);

    return 0;
}