
//Name:  nathalie
//Date:  November 2017

#include <iostream>
using namespace std;

int main ()
{
    int tim;
    cout << "Enter hour (in 24 hour time: ";
    cin >> tim;
    if (tim < 12)
    {
        cout << "Good Morning";
    }
    else if (tim >= 12 ; tim <17)
    {
        cout << "Good Afternoon";
    }
    else
    {
        cout << "Good Evening"
    }
    return 0;
}
