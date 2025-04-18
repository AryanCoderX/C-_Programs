#include<iostream>
using namespace std;
int main()
{
    int rows,column;
    cout << "Enter rows \n";// printf();
    cin >>rows ;//scanf 

    for(int i=1; i<=rows; i++)
    {
        for(int k=rows-i; k>0; k--)
        {
            cout<<"  ";
        }
        for(int j=1; j<=i; j++)
        {
            cout<<j<<" ";
        }
        for(int l=i-1; l>0; l--)
        {
            cout<<l<<" ";
        }

        cout<<"\n";
    }
    return 0;
}