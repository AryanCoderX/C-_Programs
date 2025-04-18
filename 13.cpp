#include<iostream>
using namespace std;
int smallest(int ar[],int size)
{
    int a=0, smallest=ar[0];
    for(int i=1;i<size;i++)
    {
        if(smallest>ar[i])
        {
        smallest=ar[i];
        a =i;
        }
    }
    return a;
}

int largest(int ar[],int size)
{
    int b=0, largest=ar[0];
    for(int i=1;i<size;i++)
    {
        if(largest<ar[i])
        {
        largest=ar[i];
        b =i;
        }
    }
    return b;
}


void swapArr(int arr[],int size)
{
    swap(arr[smallest(arr,size)],arr[largest(arr,size)]);
    cout<<"after swapping \n";
    for(int i=0;i<size;i++)
    cout<<arr[i]<<" ";
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
    
    swapArr(ar,size);
    return 0;
}