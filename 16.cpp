#include <iostream>
using namespace std;

int revarray(int rev[], int size)
{
    int start=0, end=size-1;
    while(start<end)
    {   
        swap(rev[start], rev[end]);
        start++;
        end--;
    }
}

int main()
{
    int size;
    cout << "Enter size of array: ";
    cin >> size;
    int arr[size];
    cout << "Enter elements of array: ";
    for(int i=0; i<size; i++)
        cin >> arr[i];
    
    revarray(arr, size);    
    cout << "Reversed array: ";
    for(int i=0; i<size; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0; 
}
