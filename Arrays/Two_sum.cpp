#include <iostream>
using namespace std;

int main()
{
    int arr[100], n, target;

    cout << "Enter the size of the array: ";
    cin >> n;

    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the target sum: ";
    cin >> target;

    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(arr[i] + arr[j] == target)
            {
                cout << "The indices of the two numbers are: "
                     << i << " and " << j << endl;
                return 0;
            }
        }
    }

    cout << "No two numbers found that add up to the target sum." << endl;

    return 0;
}
