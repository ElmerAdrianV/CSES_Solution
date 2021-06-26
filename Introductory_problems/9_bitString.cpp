#include<iostream>
using namespace std;
typedef long long ll;

int main()
{
    int n; cin>>n;
    ll result=1;
    for(int i = 0; i < n; i++){
        result=(result*2)%(1000000007);
    }
    cout << result <<"\n";
    return 0;
}