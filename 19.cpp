#include <iostream>
#include<vector>
using namespace std;

//To find the Pair sum is equal to target using the most optimized approach
int main()
{
    
    
    vector<int> vec={1,4,3,2,5};
    vector<int>ans;
    int target=9;
    
    int start=0,end=vec.size();
    while(start<end)
    {
        int pairSum= vec[start]+vec[end];
        if(pairSum>target)
        end--;
        
        else if(pairSum<target)
        start++;
        
        else if(pairSum==target)
        {
            ans.push_back(start);
            ans.push_back(end);
            break;
        }
    }
    
    cout<<"Index and value of the pair are "<<endl;
    for(int val:ans)
    {
        cout<<"Index: "<<val<<" Value:"<<vec[val]<<endl;
    }

    return 0; 
}
