#include <iostream>
#include <vector>

using namespace std;

int main(){
    int N, v;
    cin >> N >> v;

    vector<int> a(N);

    int count = 0;
    for(int i = 0; i < N; ++i){
        cin >> a[i];
        if (a[i] == v) ++count;
    }

    cout << count << endl;
    return 0;
}