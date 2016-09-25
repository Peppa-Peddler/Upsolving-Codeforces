#include <iostream>

using namespace std;

int main () {
    int N;
    cin >> N;
    for( long long A = 1 ; A <= N ; A ++ )
        cout << ( A == 1 ? 2 : A*(A + 1)*(A + 1) - A + 1 ) << endl;
}
