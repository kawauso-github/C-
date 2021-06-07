#include <iostream>
#include <string>
 
using namespace std;
 
template < typename T >

T maxinm( T x, T y ) {

	if ( x > y ) {

		return( x );
	}

	return( y );
}


//  整数値を比較し、大きいほうを返す関数
//int max(int,int);
//  実数を比較し、大きいほうを返す関数
//double max(double,double);

//  文字列を比較し、長いほうを返す関数
string maxinm( string, string );
 
int main(){
    cout << maxinm( 1, 2 ) << endl;
    cout << maxinm<double>( 1.75, 3.12 ) << endl;
    string s1 = "aiu",s2 = "eo";
    cout << maxinm( s1, s2 ) << endl;
    return 0;
}
 
//int max(int a,int b)
//{
//    if(a > b){
//        return a;
//    }
//    return b;
//}
//double max(double a,double b)
//{
//    if(a > b){
//        return a;
//    }
//    return b;
//}

string maxinm( string a, string b )
{
//	cout << "a = " << a.length() << endl;
//	cout << "b = " << b.length() << endl;
    if( a.length() > b.length() ) {

        return( a );
    }
    return( b );
}




