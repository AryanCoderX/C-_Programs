#include <iostream>
#include<vector>
using namespace std;

//To print all subarray and finding maximum sum of subarray
int main()
{
    
    
    vector<int> vec={1,2,3,4,5};
    int size=5;
    int maxSum=0;
    for(int start=0; start<size; start++)
    {
        for(int end=start; end<size ; end++)
        {
            int sum=0;
            for(int k=start; k<end+1 ; k++)
            {
                cout<<vec[k];
                sum+=vec[k];
            }
            maxSum= max(sum, maxSum);
        cout<<" ";
        }
    cout<<"\n";
    }

    cout<<"Maximum sum of subarray is:"<<maxSum;
    
    
    
    return 0; 
}
