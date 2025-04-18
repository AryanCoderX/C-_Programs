#include<iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter any number\n";
    cin >>num;
    int i=1;
    int sum=0;
    while(i<=num)
    {
        cout <<i<<" ";
        sum+=i;
        i++;
    }
    cout << "\nSum :" <<sum <<endl;
    return 0; 
}