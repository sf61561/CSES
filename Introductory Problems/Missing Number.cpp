#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,j;
    scanf("%lld",&n);
    long long int a[n-1];
    for(i=0;i<n-1;i++)
    {
        scanf("%lld",&a[i]);
    }
    sort(a,a+n-1);
    for(j=0;j<n;j++)
    {
 
        if(a[j]!=j+1)
        {
            printf("%d",j+1);
            break;
        }
    }
}