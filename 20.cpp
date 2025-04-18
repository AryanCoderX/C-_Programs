#include <iostream>
#include<vector>
using namespace std;

//To find the Best time to buy and sell stocks
int main()
{
    
    
    vector<int> ar={7,1,5,3,6,4}; //the problem with this code is that {2,4,1} if these are the prices the maximum profit is 0 however we can have a profit of 2. 
    
    int bestBuy=0,smallest=ar[0];
    for (int  i = 1; i < ar.size(); i++)
    {
        if(ar[i]<smallest)
        {
            smallest=ar[i];
            bestBuy=i;
        }
    }
    
    int largest=0;
    for (int  i = bestBuy; i < ar.size(); i++)
    {
        if(ar[i]>largest)
        {
            largest=ar[i];
        }
    }

    if(largest<smallest)
    {
        cout<<"Maximum Profit: "<<0<<endl;
        return 0;
    }

    cout<<"Maximum Profit: "<<largest-smallest<<endl;
    return 0; 
}
