#include<iostream>
using namespace std;
int Y, X;
int ANS( int A , int B , int C ) {
   return ( A==X ? 0 : 1 + ANS( B , C , min(X, B + C - 1)));
}
int main() {
    cin >> X >> Y;
    cout << ANS(Y, Y, Y) << endl;
}
