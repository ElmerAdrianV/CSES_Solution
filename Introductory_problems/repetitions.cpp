#include<iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0); cin.tie(0);
    string dna;cin >> dna;
    int longRep = 1, actSec=1;
    
    for(int i=1; i < dna.length(); i++){
            if(dna.at(i-1) == dna.at(i))
                ++actSec;
            else{
                if(longRep < actSec)
                    longRep = actSec;
                actSec=1;
            }
    }
    if(longRep < actSec)
        longRep = actSec;
    cout << longRep;
    return 0;
}