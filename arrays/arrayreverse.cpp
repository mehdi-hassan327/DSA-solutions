#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int temp;
    for(int j=0;j<n/2;j++)
    {
        temp=arr[j];
        arr[j]=arr[n-1-j];
        arr[n-1-j]=temp;
    }
    for(int k=0;k<n;k++)
    {
       cout<<arr[k]<<" ";
    }
    return 0;


}