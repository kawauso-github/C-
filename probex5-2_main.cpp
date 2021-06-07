#include <iostream>
#include <string>
#include <map>
 
using namespace std;
 
int main() {

	string					str = "";
    int						index = 0;
    int						index2 = 0;
    int						flg = 0;
    int						length = 0;
    int						cnm = 0;
    int						amari = 0;
    int						val = 0;
    int						err = 0;

	// map のデータ構造を用意する。
    map < string, string >	score;

    string names[] = { "0", "1", "2", "3", "4", "5", "6", "7", "8", "9" };

    score[ names[ 0 ] ] = "◯ ";		//  キーと値の関連付け
    score[ names[ 1 ] ] = "一";		//  キーと値の関連付け
    score[ names[ 2 ] ] = "二";		//  キーと値の関連付け
    score[ names[ 3 ] ] = "三";		//  キーと値の関連付け
    score[ names[ 4 ] ] = "四";		//  キーと値の関連付け
    score[ names[ 5 ] ] = "五";		//  キーと値の関連付け
    score[ names[ 6 ] ] = "六";		//  キーと値の関連付け
    score[ names[ 7 ] ] = "七";		//  キーと値の関連付け
    score[ names[ 8 ] ] = "八";		//  キーと値の関連付け
    score[ names[ 9 ] ] = "九";		//  キーと値の関連付け

    for( ;; ) {

		cout << "整数の値を入力してください: ";

		// 文字列の入力待ちをする
		cin >> str;

		// quit を入力されたら処理を終了する
		if( str == "quit" ) {

			break;
		}

		// 桁数を取得する
		length = str.length();

		// カンマの数を算出する
		cnm = ( ( length / 3 ) - 1 );

		// あまりがある場合はカンマの数をインクリメントする
		if( ( amari = ( length % 3 ) ) != 0 ) {
			cnm++;
		}

//		cout << "カンマの数:" << cnm << endl;
//		cout << "あまりの数:" << amari << endl;

		// 入力文字列の桁数分繰り返す
		for( index = 0 ; index < length ; index++ ) {

			// ０から９までの値の場合
			if( ( str.substr( index, 1 ) >= "0" ) &&
				( str.substr( index, 1 ) <= "9" ) ) {

				// 入力文字列を出力する
				//cout << str[ index ] << endl;
			}
			// それ以外の場合
			else {

				err = 1;
				break;
			}
		}

		// 整数チェックが正常の場合
		if ( err == 0 ) {

			cout << "変換結果:";

			// 入力文字列のレングス分検索を繰り返す
    		for( index = 0 ; index < length ; index++ ) {

				// キーテーブル分繰り返す
				for ( index2 = 0 ; index2 < 10 ; index2++ ) {

					// 入力文字列でキーを検索する
					if( names[ index2 ] == str.substr( index, 1 ) ) {

						// キーに該当する要素を出力する
						cout << score[ names[ index2 ] ] ;

						// カンマを入れる必要がある場合
						if( cnm >= 1 ) {

							// あまりがある場合
							if( amari != 0 ) {

								if( ( amari == 1 ) && ( index == 0 ) ) {

									cout << ",";
									cnm--;
									amari -= 1;
								}
								else if ( index == 1 ) {

									cout << ",";
									cnm--;
									amari -= 2;
								}

							}
							// あまりがない場合
							else {

								// カンマを入れる位置の場合
								if( ( ( length - ( index + 1 ) ) % 3 ) == 0 ) {

									cout << ",";
									cnm--;
								}
							}
						}
					}
				}
			}

			cout << endl;
		}
		// 整数チェックがerrorの場合
		else {

			cout << "整数の値を入力してください" << endl;
		}
    }

    return 0;
}




