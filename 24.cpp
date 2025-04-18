#include <iostream>
#include<vector>
using namespace std;

//To do a binary search
int main()
{
    vector<int> ar={-1,0,3,4,5,9,12};
    int target=-1;
    int start=0, end=ar.size()-1;
    while(start<=end)
    {
        int mid= (int)(start+(end-start)/2); // this is the formula we use to calculate mid as normal formula might lead to overflow
        if(ar[mid]>target)
        {
            end=mid-1;
        }
        else if(ar[mid]<target)
        {           
            start=mid+1;
        }
        else if(ar[mid]==target)
        {
            cout<<"Element is present on "<<mid<<"th index"<<endl;
            return 0;
        }

    }
    cout<<"Element is not present "<<endl;
    return 0; 
}
