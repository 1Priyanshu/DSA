#include "bits/stdc++.h"
using namespace std;

void ShellSort(int *a, int n)
{
    int intv = n / 2;
    while (intv)
    {
        for (int i = intv; i < n; i++)
        {
            int j, temp;
            temp = a[i];
            for (j = i; j >= intv && temp < a[j-intv]; j -= intv)
            {
                a[j] = a[j - intv];
            }
            a[j] = temp;
        }
        intv /= 2;
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main()
{
    int a[8] = {33, 31, 40, 8, 12, 17, 25, 42};
    int n = 8;
    ShellSort(a, n);
}