#include<iostream>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int count5=0;
    int multiply5=5;
    int n; cin>>n;
    while(n >= multiply5){
        count5 += n/multiply5;
        multiply5*=5;
    }
    cout<< count5 <<"\n";
    return 0;
}