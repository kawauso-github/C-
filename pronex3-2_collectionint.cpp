#include <iostream>
#include "pronex3-2_collectionint.h"
 
using namespace std;
 
//  コンストラクタ
template < typename TYPE >
CollectionInt < TYPE >::CollectionInt( TYPE* arr, int len )
{
    m_pArray = new arr[ len ];

    m_length = len;

    for( int i = 0; i < m_length ; i++ ) {

        m_pArray[ i ] = arr[ i ];
    }
}


//  デストラクタ
template < typename TYPE >
CollectionInt< TYPE >::~CollectionInt()
{
    delete[] m_pArray;
}

template < typename TYPE >
TYPE CollectionInt< TYPE >::getMax()
{
    TYPE max = m_pArray[0];

    for( int i = 0 ; i < m_length ; i++ ) {

        if( max < m_pArray[ i ] ) {

            max = m_pArray[i];
        }
    }
    return( max );
}

template < typename TYPE >
TYPE CollectionInt< TYPE >::getMin()
{
    TYPE min = m_pArray[0];

    for( int i = 0 ; i < m_length ; i++ ) {

        if( min > m_pArray[ i ] ) {

            min = m_pArray[ i ];
        }
    }
    return( min );
}

template < typename TYPE >
void CollectionInt< TYPE >::showArray(){

    for(int i = 0; i < m_length ; i++){

        cout << m_pArray[ i ] << " ";
    }

    cout << endl;
}




