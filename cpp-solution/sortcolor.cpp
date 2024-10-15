#include <iostream> // color sort problem done
using namespace std;
// it is using three pointer to keep track of all the three numbers;
// the time complexity is O(n) and space complexity is constant;
void dnf(int arr[], int n)
{
    int start = 0;
    int mid = 0;
    int end = n - 1;
    while (mid <= end)
    {
        if (arr[mid] == 0)
        {
            swap(arr[start], arr[mid]);
            start++;
            mid++;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(arr[end], arr[mid]);
            end--;
        }
    }
}
int main()
{
    int arr[] = {2, 2, 2, 1, 1, 1, 0, 0, 0};
    dnf(arr, 9);
    for (int i = 0; i < 9; i++)
    {
        cout << arr[i] << "  ";
    }
    return 0;
}