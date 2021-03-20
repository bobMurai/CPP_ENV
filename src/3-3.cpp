#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;

    int count = 0;
    int a, b, c, l;
    cin >> a, b;
    if (b < a)
    {
        c = a;
        a = b;
        b = c;
    }

    while (cin >> l)
    {
        if (l <= a)
        {
            b = a;
            a = l;
        }else if(l <= b) b = l;
    }

    cout << b << endl;
    return 0;
}