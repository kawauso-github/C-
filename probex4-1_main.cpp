#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){

	int				val = 0;
	int				index = 0;
	vector< int >	v1;

	for( ;; ) {

		cout << "正の整数を入力: ";
		// コンソールから値を取得する
		cin >> val;

		// −１が入力された場合処理を終了する
		if( val == -1 ) {

			break;
		}
		else {

			// 入力された値をプッシュする
			v1.push_back( val );
		}
	}

	cout << "偶数: " << endl;
			
	// ベクターに格納された値分繰り返す
	for( index = 0 ; index < v1.size() ; index++ ) {

		// ベクターの値が偶数の場合
		if( v1[ index ] % 2 == 0 ) {

			cout << v1[ index ] << " ";
		}
	}
	cout << endl;

	cout << "奇数: " << endl;
			
	// ベクターに格納された値分繰り返す
	for( index = 0 ; index < v1.size() ; index++ ) {

		// ベクターの値が奇数の場合
		if( v1[ index ] % 2 != 0 ) {

			cout << v1[ index ] << " ";
		}
	}
	cout << endl;

	return 0;
}





