//4034903   Jul 7, 2013 5:22:04 PM	fuwutu	 318A - Even Odds	 GNU C++0x	Accepted	15 ms	0 bB
#include <iostream>
using namespace std;
int main()
{
    long long n, b;
    cin >> n >> b;
    if (b <= (n + 1) / 2)
        cout << b * 2 - 1 << endl;
    else
        cout << (b - (n + 1) / 2) * 2 << endl;
        
}