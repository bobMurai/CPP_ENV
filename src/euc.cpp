#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    GCD(a, b);
}

int GCD(int m, int n){
    if (n == 0) return m;
    return GCD(n, m%n);
}