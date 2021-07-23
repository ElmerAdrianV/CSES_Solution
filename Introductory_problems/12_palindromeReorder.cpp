#include <iostream>
#include <unordered_map>

using namespace std;

static char imLett;
static bool impar = 0;
static unordered_map<char, int> unMap;

void getSolution(char letter){
	if(letter == '['){
		if(impar)
			cout<<imLett;
	}
	else{
		char next=letter+1;
		for(int i=0; i < unMap[letter] ; i+=2){
			cout << letter;
		}
		getSolution(next);
		for(int i=0; i < unMap[letter] ; i+=2){
			cout << letter;
		}
	}
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string palin;
    cin >> palin;
    bool  solution = 1;
    

    for (int i = 0; i < palin.size(); i++)
        unMap[palin[i]]++;

    for (char letter = 'A'; letter <= 'Z'; letter++)
    {
        if (unMap[letter] % 2 == 1)
        {
            if (impar)
            {
                solution = 0;
                break;
            }
            else{
            	imLett = letter;
                impar = 1;
                unMap[letter]--;
            }
        }
    }
    if (solution)
        getSolution('A');
    else
        cout << "NO SOLUTION";
}
