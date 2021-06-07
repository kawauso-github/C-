#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){

	string				val = "";
	int					index = 0;
	int					max = 0;
	int					min = 0;
	vector< string >	s1;

	for( ;; ) {

		cout << "文字列を入力: ";

		// コンソールから値を取得する
		cin >> val;

		// qが入力された文字がヌルの場合処理を終了する
		if( val == "quit" ) {

			break;
		}
		else {

			// 入力された値をプッシュする
			s1.push_back( val );
		}
	}

	// ベクターに格納された値分繰り返す
	for( index = 0, max = s1[ index++ ].length() ; index < s1.size() ; index++ ) {

		// 文字列の長さがMAX値よりも大きい場合
		if( s1[ index ].length() > max ) {

			max = s1[ index ].length();
		}
	}

	cout << "最長の単語:";

	// ベクターに格納された値分繰り返す
	for( index = 0 ; index < s1.size() ; index++ ) {

		// 文字列の長さがMAX値と等しい場合
		if( s1[ index ].length() == max ) {

			cout << s1[ index ] << " ";
		}
	}

	// ベクターに格納された値分繰り返す
	for( index = 0, min = s1[ index++ ].length() ; index < s1.size() ; index++ ) {

		// 文字列の長さがMIN値よりも小さい場合
		if( s1[ index ].length() < min ) {

			min = s1[ index ].length();
		}
	}

	cout << endl << "最短の単語:";

	// ベクターに格納された値分繰り返す
	for( index = 0 ; index < s1.size() ; index++ ) {

		// 文字列の長さがMIN値と等しい場合
		if( s1[ index ].length() == min ) {

			cout << s1[ index ] << " ";
		}
	}

	cout << endl;

	return 0;
}





