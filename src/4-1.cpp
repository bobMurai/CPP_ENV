#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cout << tribo(n) << endl;
}

int tribo(int n)
{
    if (n == 0 || n == 1)
    {
        return 0;
    }
    else if (n == 2)
    {
        return 1;
    }
    return tribo(n - 1) + tribo(n - 2) + tribo(n - 3);
}