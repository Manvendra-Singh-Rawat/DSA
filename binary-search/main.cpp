#include <iostream>
using namespace std;

int BinarySearch(int arr[], int size, int item)
{
    int Start = 0;
    int End = size - 1;
    int MidTerm;
    int Iteration = 0;
    int i = -1;
    
    while(Start <= End)
    {
        MidTerm = (Start + End) / 2;
        
        cout<<"Array emenent: "<<arr[MidTerm]<<" Iteration: "<<++Iteration<<endl;
        
        if(arr[MidTerm] == item)
        {
            return MidTerm;
        }
        else if(arr[MidTerm] > item)
        {
            End = MidTerm - 1;
        }
        else if(arr[MidTerm] < item)
        {
            Start = MidTerm + 1;
        }
    }
    
    return i;
}

int main()
{
    int array[] = {1, 2, 10, 11, 19, 29, 30};
    int size = sizeof(array)/sizeof(int);
    
    int item;
    cin>>item;
    
    int Result = BinarySearch(array, size, item);
    
    cout<<Result;
    
    return 0;
}