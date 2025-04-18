#include<iostream>
using namespace std;
int sum(int a);
int main()
{
    int num;
    cout << "Enter any number \n";
    cin >>num;
    cout<<"Sum : "<<sum(num)<<endl;
    return 0;
}

int sum(int a)
{
    int sum=0;
    while(a>0)
    {
        sum= sum+(a%10);
        a/=10;
    }
    return sum;
}
