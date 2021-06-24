#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n; cin >> n;
    long moves=0;
    int array[n];
    for(unsigned i=0; i < n ; i++)
        cin>> array[i];
    for(unsigned i=1; i<n; i++){
        
        if( array[i-1] - array[i] > 0 ){
            moves += array[i-1] - array[i];
            array[i] = array[i-1];
        }
    }
    cout<< moves;
    return 0;
}