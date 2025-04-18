#include<iostream>
using namespace std;

void commonArr(int ar1[], int ar2[], int size)
{
    int a=0 , commonArr[a];
    for(int i=0; i<size; i++)
    {
        for(int j=0;j<size;j++)
        {
            if(ar1[i]==ar2[j])
            {
            commonArr[a]=ar1[i];
            a++;
            }
        }
    }
    if(a==0)
    cout<<"There Were no common terms";
    cout<<"Array of common terms\n";
    for(int i=0; i<a; i++)
    {
        cout<<commonArr[i]<<" ";
    }
}

int main()
{
    int size;
    cout<<"Enter size of 1st Array\n";
    cin>>size;
    int ar1[size];
    cout<<"Enter the elements of the 1st array\n";
    for(int i=0;i<size;i++)
    cin>>ar1[i];

    int ar2[size];
    cout<<"Enter the elements of the 2nd array\n";
    for(int i=0;i<size;i++)
    cin>>ar2[i];
    
    commonArr( ar1, ar2, size);

    return 0;
}