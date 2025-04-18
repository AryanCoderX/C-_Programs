#include<iostream>
using namespace std;
int main()
{
    int rows,column;
    cout << "Enter rows \n";
    cin >>rows ;

    for(int i=0; i<=rows; i++)
    {
        for(int k=1; k<rows; k--)
        {
            cout<<"  ";
        }
        cout<<"* ";
        for(int j=1; j< 2i-1; j++)
        {
            cout<<"  ";
        }
        if(i!=0)
        {
            cout<<"* ";        
        }

        cout<<"\n";
    }
    return 0;
}