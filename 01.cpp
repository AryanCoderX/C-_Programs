#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter an alphabet \n";
    cin >>ch;

    if(ch>=65 && ch<=90)
    cout << "Uppercase\n";
    else if(ch>=97 && ch<=122)
    cout << "Lowercase\n";
    else
    cout << "Invalid Output\n";

    return 0; 
}