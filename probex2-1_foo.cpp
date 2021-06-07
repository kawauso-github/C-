#include <iostream>
#include "probex2-1_foo.h"
#include "probex2-1_bar.h"
 
using namespace std;
 
void Foo::hoge() {

    cout << "Foo::hoge()" << endl;
}

void Foo::fuga(Bar* pBar){

    cout << "Foo::fuga()" << endl;
    pBar->func2();
}



