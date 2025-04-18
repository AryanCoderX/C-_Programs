#include <iostream>
#include<vector>
using namespace std;

//To find the product of array except self through prefix suffix function
//Problem in this code is that the run time exceeds 

int prefix(vector<int> ar,int index)
{
    int product=1;
    for (int i = 0; i < index; i++)
    {
        product*=ar[i];
    }
    return product;
}

int suffix(vector<int> ar,int index)
{
    int product=1;
    for (int i = index+1; i < ar.size(); i++)
    {
        product*=ar[i];
    }
    return product;
}

int main()
{
    
    
    vector<int> ar={1,2,3,4};
    vector<int> ans;
    
    for (int i = 0; i < ar.size(); i++)
    {
       
        ans.push_back((prefix( ar,i)*(suffix( ar,i))));
    }
    
    cout<<"Product of array except self: "<<endl;
    for (int val: ans)
    {
        cout<<val<<"\t";
    }
    
    
    return 0; 
}
