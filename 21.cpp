#include <iostream>
#include<vector>
using namespace std;

//To find the Best time to buy and sell stocks more optimized approach with edge case scenarios
int main()
{
    
    
    vector<int> ar={2,4,1};
    int bestBuy=ar[0],maxProfit=0;

    for (int i = 1; i < ar.size(); i++)
    {
        if(ar[i]>bestBuy)
        {
            maxProfit= max(maxProfit, ar[i]-bestBuy);
        }
        bestBuy= min(bestBuy, ar[i]);  
    }
    
    cout<<"Maximum Profit: "<<maxProfit<<endl;
    
    return 0; 
}
