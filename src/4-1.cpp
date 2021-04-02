#include <iostream>
#include <vector>

using namespace std;

vector<long long> memo;

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

    if(memo[n] == -1){
        memo[n] = tribo(n - 1) + tribo(n - 2) + tribo(n - 3);
    }

    return memo[n];
}

int main()
{
    int n;
    cin >> n;
    memo.assign(n, -1);
    cout << tribo(n) << endl;
}
