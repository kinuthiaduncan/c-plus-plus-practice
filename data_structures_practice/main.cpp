#include <iostream>
#include <vector>
#include "IntCell.h"

using namespace std;

template <typename Comparable>

const Comparable & findMax( const vector<Comparable> & a )
{
    int maxIndex = 0;

    for( int i = 1; i < a.size( ); ++i )
        if( a[ maxIndex ] < a[ i ] )
            maxIndex = i;

    return a[ maxIndex ];
}
int main()
{
    vector<int> v1= {1,2,3,4,14,56,89,90,1,2,355};
    cout<<findMax(v1)<<endl;
    return 0;
}