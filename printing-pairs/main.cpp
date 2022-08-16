#include <iostream>
using namespace std;

void PrintPairs(int array[], int size)
{
    for(int i = 0; i < size - 1; i++)
    {
        for(int j = i + 1; j < size; j++)
            cout<<"("<<array[i]<<","<<array[j]<<")  ";
        cout<<endl;
    }
}

int main()
{
    int Array[] = {1, 5, 2, 6, 4, 3};
    int Size = sizeof(Array)/ sizeof(int);
    PrintPairs(Array, Size);
    return 0;
}