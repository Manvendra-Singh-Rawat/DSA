#include <iostream>
using namespace std;

void PrintSubArray(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        for(int k = i; k < size; k++)
        {
            for(int j = i; j <= k; j++)
            {
                cout<<arr[j]<<", ";
            }
            cout<<endl;
        }
    }
}

int main()
{
    int Array[] = {10, 20, 30, 40, 50, 60, 70};
    int Size = sizeof(Array)/sizeof(int);
    PrintSubArray(Array, Size);
    
    return 0;
}