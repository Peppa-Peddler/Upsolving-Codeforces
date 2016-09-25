#include<iostream>

using namespace std;

int main() {

    int N, C;

    cin >> N >> C;
    
    N--;
    int ANS = 1;
    int TM;
    int AUX;

    cin >> TM;
    while ( N-- ) {
    
        cin >> AUX;
        if( AUX - TM > C ) ANS = 0;
        TM = AUX;
        ANS++;
    
    }

    cout << ANS << endl;

}
