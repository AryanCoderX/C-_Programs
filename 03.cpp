#include<iostream>
using namespace std;
int main()
{
    int rows,column;
    cout << "Enter rows and column\n";
    cin >>rows >> column;

    for(int i=1; i<=rows; i++)
    {
        for(int j=1; j<=column; j++)
        {
            cout<<j<<" ";
        }
        cout<<"\n";
    }
    return 0;
}