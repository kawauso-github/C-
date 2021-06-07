#include <iostream>
#include "probex2-1_bar.h"
#include "probex2-1_foo.h"
 
using namespace std;
 
void Bar::func1( Foo* pFoo )
{
    pFoo->hoge();
}

void Bar::func2()
{
    cout << "Bar::func2" << endl;
}



