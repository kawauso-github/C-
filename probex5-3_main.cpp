#include <iostream>
#include <string>
#include <set>
#include <cstdlib> 
 
using namespace std;
 
int main() {

    set< int >	names;  // set のデータ構造を用意する。
	int			randum = 0;
	int			index = 0;

	cout << "乱数:";

    //  あたいを代入
	for( index = 0 ; index < 10 ; index++ ) {
    	randum = ( rand() % 11 );
		cout << randum << " ";
    	names.insert( randum );
	}
	cout << endl;
	
    //  登録されている全データを表示
    set< int >::iterator it; //  イテレータを用意

	cout << "出現した数:";

    for( it = names.begin() ; it != names.end() ; it++ ) {
        cout << *it << " ";
    }
	cout << endl;

#if 0
    //  Bob,Steveがデータ内に存在するか調べる
    string n[] = {"Bob","Steve"};

    int i;

    for( i = 0 ; i < 2 ; i++ ) {

        it = names.find( n[ i ] );

        if( it == names.end() ) {

            //  データが、set内に存在しなしい
            cout << n[ i ] << " is not in a set." << endl;
        }
		else {

            //  データがset内に存在する。
            cout << n[ i ] << " is in a set." << endl;
        }
    }
#endif

    return 0;
}




