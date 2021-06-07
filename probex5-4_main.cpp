#include <iostream>
#include <string>
#include <set>
 
using namespace std;
 
int main() {

    set< string >	names;  // set のデータ構造を用意する。
	int			index = 0;
	string		str = "";
	int			length = 0;

	for( ;; ) {

		cout << "英単語を入力:";

		// 文字列の入力待ちをする
		cin >> str;

		// quit を入力されたら処理を終了する
		if( str == "quit" ) {

			break;
		}

		// 桁数を取得する
		length = str.length();

    	//  あたいを代入
		for( index = 0 ; index < length ; index++ ) {
    		names.insert( str.substr( index, 1 ) );
		}
	
    	//  登録されている全データを表示
    	set< string >::iterator it; //  イテレータを用意

		cout << "使用されているアルファベット:";

    	for( it = names.begin() ; it != names.end() ; it++ ) {
        	cout << *it << " ";
    	}

		cout << endl;
    }

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




