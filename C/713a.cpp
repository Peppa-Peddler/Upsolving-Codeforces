#include <iostream>
#include <string>

using namespace std;

int FREC[ 1 << 19 ] = {};

int get( long long VAL ){
    int NUM = 0;
    for ( int X = 1 ; VAL > 0 ; VAL /= 10LL, X *= 2 )
        NUM += (VAL & 1LL) * X;
    return NUM;
}

void ADD( long long VAL ){
    FREC[ get( VAL ) ] ++;
}

void DEL( long long VAL ){
    FREC[ get( VAL ) ] --;
}

int QUE( long long VAL ){
    return FREC[ get(VAL) ];
}

int main() {

    int N;
    char A;
    long long B;

    cin >> N;

    while ( N-- ){
    
        cin >> A >> B;
        if( A == '+' ) ADD( B );
        if( A == '-' ) DEL( B );
        if( A == '?' ) cout << QUE( B ) << endl;

    }

}
