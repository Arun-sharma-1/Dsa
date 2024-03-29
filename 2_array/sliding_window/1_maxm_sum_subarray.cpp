#include <bits/stdc++.h>
using namespace std;
// kadens algorithm = Largest Sum Continous Subarray
/*
Kadane algorithm is used to find:
(A) Maximum sum subsequence in an array
(B) Maximum sum subarray in an array
(C) Maximum product subsequence in an array
(D) Maximum product subarray in an array
*/
int sliding(int arr[], int n, int k)
{
    int i, j; // i is starting and j is last index
    i = j = 0;
    int sum = 0;
    int mx = INT_MIN;

    while (j < n)
    {
        sum = sum + arr[j];
        if (j - i + 1 < k) // else if only run when if condition is false
            j++;
        else if (j - i + 1 == k)
        {
            mx = max(sum, mx);
            sum = sum - arr[i];
            i++;
            j++;
        }
    }
    cout << mx << endl;
}

int main()
{
    int n = 4;
    int arr[n] = {1, -2, 3, -2};
    int k = 3;
    sliding(arr, n, k);
    return 0;
}