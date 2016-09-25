#include<iostream>

using namespace std;


int main() {

    int N, B;
    string C;
    bool SA[ 100005 ];
    int S[ 2 ][ 2 ] = {};
    int ANS[ 2 ] = {};
    bool EQ;

    cin >> N >> C; 
    for( int A = 0 ; A < N ; A++ ) SA[ A ] = (C[ A ]=='r');

    for( int A = 0 ; A < N ; A++ ) {
        EQ = (SA[ A ] == ( A & 1 ));
        if( S[ EQ ][ A & 1 ] ) S[ EQ ][ A & 1 ]--, ANS[ EQ ]++;
        else S[ EQ ][ !(A & 1) ]++;
    }

    ANS[0] += S[0][0] + S[0][1];
    ANS[1] += S[1][0] + S[1][1];

    cout << min( ANS[0] , ANS[1] ) << endl;
}
