#include<iostream>
#include<algorithm>
using namespace std;

int main(){

    int n;

    cin >> n;

    int A[ 300005 ];
    long long ans = 0;

    for( int i = 0 ; i < n ; i++ ) {
        cin >> A[ i ];
    }
    
    sort( A , A + n );

    for( int i = 0 ; i < n ; i++ ) 
        ans += 1LL*(A[ i ] - A[ 0 ]);

    int idx = -1;

    long long maxi = ans;

    for( int i = 0 ; i < n - 1 ; i++ ){
    
        ans += ( A[ i + 1 ]*1LL - A[ i ]*1LL )*( 2LL*i + 2LL - n );

        if( ans < maxi ){
            
            maxi = ans;
            idx = i;
        
        }

    }
    
    cout << A[idx + 1] << endl;


}
