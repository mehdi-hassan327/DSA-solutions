#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int n;
    cin >> n;
    vector<int> arr(n);
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for(int j=0;j<n-1;j++)
    {
        if(arr[j]<=arr[j+1])
        {
            count++;
        }
    }
    if(count == n-1)
    {
        cout<<"Array is sorted in ascending order"<<endl;
    }
    else
    {
        cout<<"Array is not sorted in ascending order"<<endl;
    }

    return 0;
}