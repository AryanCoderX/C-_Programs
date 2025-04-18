#include <iostream>
#include<vector>
using namespace std;

//Book Allocation
bool isValid(vector<int> ar , int mid , int m)
{   
        int s=1,pg=0;
        for(int i=0;i<ar.size();i++)
        {
            if(ar[i]>mid)
            return false;
            if((pg+ar[i]>mid))
            {
                s++;
                pg=ar[i];
            }
            else
            pg+=ar[i];
        }
    
        if(s>m)
        return false;
        else
        return true;
}

int main()
{
    vector<int> ar={10,20,30,40};
    int n=4,m=2;// here n is the number of books and m is the number of students.
    
    int max=0;
    for(int i=0;i<ar.size();i++) 
        max+=ar[i];

    int finalAns=INT8_MAX;

    int start=0,end=max-2;
    while(start<=end)
    {
        int mid= (int)(start+(end-start)/2);

        if (isValid(ar,mid,m))
        {
            finalAns= min(finalAns,mid);
            end=mid-1;
        }
        else{
            start=mid+1;
        }   
    }

    cout<<"Minimum possible number of pages is:"<<finalAns<<endl;

    return 0;
}
