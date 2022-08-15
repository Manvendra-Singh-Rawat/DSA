#include <iostream>
using namespace std;

void ReverseArray(int array[], int size)
{
    int End = size - 1;
    int MidIndex = (End) / 2;

    for(int i = 0; i <= MidIndex; i++)
    {
        swap(array[i], array[End - i]);
    }
}

int main()
{
    int Array[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    int Size = sizeof(Array)/sizeof(int);
    
    ReverseArray(Array, Size);
    
    for(int i : Array)
    {
        cout<<i<<" ";
    }
    
    return 0;
}