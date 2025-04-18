#include <iostream>
#include<vector>
using namespace std;

//To find the product of array except self through brute force approach
int main()
{
    
    
    vector<int> ar={1,2,3,4};
    vector<int> ans;
    
    for (int i = 0; i < ar.size(); i++)
    {
        int product=1;
        for (int j = 0; j < ar.size(); j++)
        {
            if(i!=j)
            product*= ar[j];
        }
        ans.push_back(product);
    }
    
    cout<<"Product of array except self: "<<endl;
    for (int val: ans)
    {
        cout<<val<<"\t";
    }
    
    
    return 0; 
}
