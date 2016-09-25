#include <iostream>

using namespace std;

long long L1, R1, L2, R2, K;

long long ANS(){

    if( L1 > R2 or R1 < L2 ) return 0;
    
    long long L, R;
    L = max( L1 , L2 );
    R = min( R1 , R2 );

    return R - L + 1 - ( K >= L and K <= R );
    
}

int main() {

    cin >> L1 >> R1 >> L2 >> R2 >> K;
    cout << ANS() << endl;

}
