#include <iostream>
using namespace std;
int removeDuplicate(int arr[], int n)
{
    int k = 1;
    for (int i = 1; i < n - 1; i++)
    {
        if (arr[i] != arr[i - 1])
        {
            arr[k++] = arr[i];
        }
        }
    return k;
}
int main()
{
    int arr[] = {0, 1, 1, 2, 2, 2, 3, 4, 5, 5, 5};
    cout << removeDuplicate(arr, 11);
    return 0;
}