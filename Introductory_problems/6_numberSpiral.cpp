#include<iostream>
using namespace std;

typedef long long ll;
typedef pair<ll, ll> pll;
#define RSIP(i,a,n) for(int i=a; i<n; i++)

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    ll t; cin>> t;
    ll i;
    pll par;
    RSIP(i, 0, t){
        cin>> par.first >> par.second;
        if(par.first >= par.second){
            if(par.first%2 == 0)
                cout << par.first*par.first - (par.second-1) << "\n";
            else
                cout << (par.first-1)*(par.first-1)+par.second << "\n";
        }
        else{
            if(par.second%2 == 0)
                cout << (par.second-1)*(par.second-1)+par.first << "\n";
            else
                cout << par.second*par.second - (par.first-1) << "\n";
        }
        
    }
    

    return 0;
}