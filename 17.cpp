#include <iostream>
#include<vector>
using namespace std;

//To find the single/unique element in the array
int check(vector<int>&vec,int n)
{
    int ans=vec[0];
    for(int i=1; i<n; i++)
    {
        ans^=vec[i];
    }
    return ans;
}

int main()
{
    
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    vector<int> vec(n);
    
    
    cout<<"Enter"<<n<<"elements"<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>vec[i];
    }

    cout<<"Unique Element in the array is:"<<check(vec,n)<<endl;
    
    
    return 0; 
}
