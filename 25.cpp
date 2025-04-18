#include <iostream>
#include<vector>
using namespace std;

//To do a binary search using recursion 
int binarySearch(vector<int> ar,int start, int end, int target)
{   
        int middle= (int)(start+(end-start)/2);
        if(ar[middle]>target)
        {            
            binarySearch( ar, start, middle-1, target);
        }
        else if(ar[middle]<target)
        {              
            binarySearch( ar, middle+1, end, target);
        }
        else if(ar[middle]==target)
        {
            return middle;
        }
    
    if (start>end)
    {
        return -1; 
    }
        
}

int main()
{
    vector<int> ar={-1,0,3,4,5,9,12};
    int target=12;
    int start=0, end=ar.size()-1;
    int ans=binarySearch( ar, start, end, target);
    cout << (ans == -1 ? "Element was not found" : "Element is present at index " + to_string(ans)) << endl;

    return 0;
}
