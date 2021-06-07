#include <iostream>
#include "pronex3-2_collectionint.h"
 
using namespace std;
 
int main(){

    //  配列変数の定義
    int data_a[] = { 1,5,4,2,3 };

    cout << "実数の場合" << endl;
//	CollectionInt< int >( data_a, 5 );

    CollectionInt< int >* c = new CollectionInt< int >( ( int *)data_a, 5 );
    c->showArray();

    cout << "最大値 : " << c->getMax() << endl;
    cout << "最小値 : " << c->getMin() << endl;
    delete c;

    //  配列変数の定義
//    double data_b[] = { 1.2, 3.5, 8.1, 4.9, 2.0, 2.2 };

//    cout << "整数の場合" << endl;
//    CollectionInt< double >* d = new CollectionInt< double >( data_b, 6 );
//    d->showArray();

//    cout << "最大値 : " << c->getMax() << endl;
//    cout << "最小値 : " << c->getMin() << endl;
//    delete d;

    return 0;
}




