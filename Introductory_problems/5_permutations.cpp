#include<iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n; cin >> n;
    int i=n;
    if(n==2 || n==3){
        cout << "NO SOLUTION";
    }
    else{
        if(n==4){
            cout << "2 4 1 3";
        }
        else{
            while( i > 0){
                cout<< i << " ";
                i-=2;
            }
            i = n-1;
            while( i > 0){
                cout<< i << " ";
                i-=2;
            }
        }
    }
    return 0;
}