#include <iostream>
using namespace std;

int LinearSearch(int Arr[], int Size, int Item, int *ItrPtr)
{
    int i = -1;
    
    for(i = 0; i < Size; i++)
    {
        (*ItrPtr)++;
        if(Arr[i] == Item)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int Iteration = 0;
    
    int Array[] = {24, 53, 12, 64, 73, 58};
    int Size = sizeof(Array)/sizeof(int);
    
    int item;
    cin>>item;
    
    int Result = LinearSearch(Array, Size, item, &Iteration);
    cout<<"Result: "<<Result<<" Total Iterations: "<<Iteration;
    
    return 0;
}