#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int ma=INT_MIN;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        ma=max(ma,arr[i]);

    }
    return 0;
}