#include<iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int n; cin >> n;
    int sum = n*(n+1)/2;
    if(sum%2 == 0){
        cout << "YES" << "\n";
        if(n%2 == 1){
            int set1[n/2];
            int set2[(n+1)/2];
            int i;
            
            set1[n/2-1] = n;
            for(i=1; i <= n/4; i++){
                set1[i-1]  = i;
                set1[n/2-1-i] = n - i;
            }

            for(int a=0; a < (n+1)/2; a++ ){
                set2[a]=i;
                ++i;
            }
            
            cout << n/2 << "\n";
            for(int k: set1){
                cout << k <<" ";
            }
            cout << "\n";
            
            cout << (n+1)/2 << "\n";
            for(int k: set2){
                cout << k <<" ";
            }
            cout << "\n";
        }
        else{
            int set1[n/2];
            int set2[n/2];
            int i;
            
            
            for(i=0; i < n/4; i++){
                set1[i]  = i+1;
                set1[n/2-1-i] = n - i;
            }
            
            for(int a=0; a < n/2; a++ ){
                set2[a]=i+1;
                ++i;
            }
            
            cout << n/2 << "\n";
            for(int k: set1){
                cout << k <<" ";
            }
            cout << "\n";
            
            cout << n/2 << "\n";
            for(int k: set2){
                cout << k <<" ";
            }
            cout << "\n";

        }

    }
    else
        cout << "NO";
    
    return 0;
}