#include<iostream>
using namespace std;
int main()
{
    int rows,column;
    cout << "Enter rows \n";
    cin >>rows ;

    for(int i=1; i<=rows; i++)
    {
        for(int k=1; k<i; k++)
        {
            cout<<"  ";
        }
        for(int j=1; j<=(rows+1-i); j++)
        {
            cout<<i<<" ";
        }
        cout<<"\n";
    }
    return 0;
}