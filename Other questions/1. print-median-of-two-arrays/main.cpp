#include <iostream>
#include <set>
using namespace std;

int main()
{
    int arr1[5] = {1, 2, 5, 3, 2}, arr2[5] = {5, 6, 3, 8, 9};
    set<float> set1;
    float sum = 0;
    
    for(int i = 0; i < 5; i++)
    {
        set1.insert(arr1[i]);
        set1.insert(arr2[i]);
    }

    int size = set1.size();
    int index = -1;

    for(auto itr = set1.begin(); itr != set1.end(); itr++)
    {
        index++;
        if(size % 2 == 0)
        {
            if(index == size/2 || index == (size/2)- 1)
            {
                sum += (*itr / 2);
            }
            if(index == size / 2)
                break;
        }
        else
        {
            if(index == size/2)
            {
                sum = *itr;
                break;
            }
                
        }
    }
    
    cout<<sum;
    
    return 0;
}