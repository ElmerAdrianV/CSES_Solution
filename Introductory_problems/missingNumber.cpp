#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    long n;
    cin >> n;
    long sum = n * (n + 1) / 2;
    int i_num;

    for (int i = 0; i < n-1; i++)
    {
        cin >> i_num;
        sum -= i_num;
    }

    cout << sum;
}
