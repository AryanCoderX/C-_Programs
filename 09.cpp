#include<iostream>
using namespace std;
int factorial(int a);
float calculate(int n, int r);

int main()
{
    int n,r;
    cout << "Enter values of n and r \n";
    cin >>n>>r;
    cout<<"Binomial Coefficient : "<<calculate(n,r)<<endl;
    return 0;
}

int factorial(int a)
{
    int fact=1;
    for(int i=1; i<=a; i++)
    {
        fact*=i;
    }
    return fact;
}
float calculate(int n, int r)
{
    return (factorial(n)/ (factorial(r)*factorial(n-r)));
}
