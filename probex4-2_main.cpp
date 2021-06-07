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

	// ベクターに格納された値分繰り返す
	for( index = 0 , val = v1[ index++ ] ; index < v1.size() ; index++ ) {

		// ベクターの値が保存した値よりも大きい場合
		if( v1[ index ] > val ) {

			// 最大値を更新する
			val = v1[ index ];
		}
	}

	cout << "最大値: " << val << endl;

	// ベクターに格納された値分繰り返す
	for( index = 0 , val = v1[ index++ ] ; index < v1.size() ; index++ ) {

		// ベクターの値が保存した値よりも大きい場合
		if( val > v1[ index ] ) {

			// 最小値を更新する
			val = v1[ index ];
		}
	}

	cout << "最小値: " << val << endl;

	return 0;
}





