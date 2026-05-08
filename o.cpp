#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 5, 2, 7, 5, 5, 9, 90, 90, 90, 70, 889, 221, 243, 2232, 8782912, 2432, 3423, 70, 90, 450, 899, 1, 1, 1, 22, 22, 3333, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Duplicates: " << '\n';
    cout << "Size Of N : " << n << '\n'; 
    for (int i = 0; i < n; i++)
    {
        // check if already printed before
        bool alreadyPrinted = false;

        for (int k = 0; k < i; k++)
        {
            if (arr[i] == arr[k])
            {
                alreadyPrinted = true;
                break;
            }
        }
        if (alreadyPrinted) 
            continue;

        // count occurrences
        int count = 0;

        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j]) // is i  is over aftr it reaches here
            { 
                count++;
            }
        }

        // print if appears more than once
        if (count > 1)
        {
            cout << arr[i] << " ";
        }
    }

    return 0;
}