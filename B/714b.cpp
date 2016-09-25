#include<iostream>
#include<set>

using namespace std;

string ANS( set <int> &S ){

    if( S.size() > 3 ) return "NO";
    if( S.size() <= 2 ) return "YES"; 
    set <int>::iterator S0,S1,S2;
    S2 = S.begin(), S0 = S2++, S1 = S2++;
    return ( *S0 + *S2 == *S1*2 ? "YES" : "NO" );
}

int main() {

    int N, A;
    cin >> N;
    set <int> S;

    while( N-- ){
        cin >> A;
        S.insert( A );
    }
    
    cout << ANS( S ) << endl;
}
