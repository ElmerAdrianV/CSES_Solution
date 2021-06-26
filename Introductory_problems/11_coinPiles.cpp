#include<iostream>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int k; cin>>k;
    ll a,b;
    for(int i=0; i < k; i++){
        cin>> a >> b;
        if((a+b)%3 != 0)
            cout<<"NO\n";
        else{
            if(a > b)
                swap(a,b);
            if(2*a < b)
                cout<<"NO\n";
            else
                cout<<"YES\n";
        }
    }
    return 0;
}