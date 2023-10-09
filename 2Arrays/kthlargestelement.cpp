#include <iostream>
using namespace std;

int main()
{

    int arr[5] = {9, 4, 7, 6, 5};

    int i, j, size = 5, count;
    int k ;
    cout<<"enter kth max element ";
    cin>>k;
    if (k > 0 && k <=size)
    {
        for (i = 0; i < size; i++)
        {
            count = 0;
            for (j = 0; j < size; j++)
            {
                if (arr[j] > arr[i])
                {
                    count++;
                }
            }
            if (count == k - 1)
            {
                cout << arr[i];
            }
        }
    }
    else
    {
        cout<<"element is not in range";
        
    }
}