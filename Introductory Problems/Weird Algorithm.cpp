#include<bits/stdc++.h>
using namespace std;
void fastIO(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
}
void solve(long long int n){
    if(n==1){
        cout<<1;
        return;
    }
    else{
        cout<<n<<endl;
        if(n%2==0) n=n/2;
        else n=(n*3)+1;
        solve(n);
        return;
    }
}
int main()
{
    fastIO();
    long long int n;
    cin>>n;
    solve(n);
}
