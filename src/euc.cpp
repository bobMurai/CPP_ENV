#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    cout << GCD(a, b) << endl;
}

int GCD(int m, int n)
{
    if (n == 0)
        return m;
    return GCD(n, m % n);
}