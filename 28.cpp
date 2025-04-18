#include <iostream>
using namespace std;

//All types of sorting

void bubbleSort(int ar[],int size)     // 0(n^2) not really a good time complexity for sorting
{
    for(int i=0;i<size-1;i++)
    {
        for(int j=0;j<size-i-1;j++)
        {
            if(ar[j]>ar[j+1])
            swap(ar[j],ar[j+1]);
        }
    }
}

void selectionSort(int ar[],int size)      // 0(n^2) not really a good time complexity for sorting
{
    for (int i = 0; i < size-1; i++)
    {
        int smallestIdx=i;
        for (int j = i; j < size; j++)
        {
            if(ar[j]<ar[smallestIdx])
            smallestIdx=j;
        }
        swap(ar[i], ar[smallestIdx]);   
    }
}

void insertionSort(int ar[], int size)      // 0(log n) which is the best time complexity for sorting
{
    for (int i = 1; i < size; i++)
    {
        int curr=i,prev=i-1;
        while (prev>=0 && ar[curr]<ar[prev])
        {
            
            swap(ar[curr],ar[prev]);
            prev--;
            curr--;
        }
        
    }
    
}



int main()
{
    int ar[]={4,1,5,2,3};
    int size=5;
    
    // bubbleSort(ar,size);

    // selectionSort(ar,size);

    insertionSort(ar,size);
    
    for (int  i = 0; i < size; i++)
    {
        cout<<ar[i]<<"\t";
    }
    
    return 0;
}
