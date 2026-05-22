#include <iostream>
using namespace std;

// Swap utility
inline void swap_val(int &a, int &b)
{
    int t = a;
    a = b;
    b = t;
}

// ZigZag pass (forward + backward)
void zigzagPass(int a[], int n)
{
    // Forward pass
    for(int i = 0; i < n - 1; i++)
    {
        if(a[i] > a[i + 1])
            swap_val(a[i], a[i + 1]);
    }

    // Backward pass
    for(int i = n - 1; i > 0; i--)
    {
        if(a[i] < a[i - 1])
            swap_val(a[i], a[i - 1]);
    }
}

// Recursive ZigZag Sort
void zigZagSort(int a[], int n)
{
    if(n <= 1)
        return;

    // Perform one full zigzag pass
    zigzagPass(a, n);

    // Reduce problem size
    zigZagSort(a, n - 1);
}

int main()
{
    int a[] = {
        23123,43,4,24,345,44,41,1,5,23,52,54,254,345,345,
        235,63,6356,3463,566,34,353,563,436,23,75,5465,2,1
    };

    int n = sizeof(a) / sizeof(a[0]);

    zigZagSort(a, n);

    for(int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}
