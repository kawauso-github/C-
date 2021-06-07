#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){

	vector< int > v1;
	vector< string > v2;

	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);
	v1.push_back(4);
	v1.push_back(5);
	v1.push_back(6);
	v1.push_back(7);
	v1.push_back(8);
	v1.push_back(9);
	v1.push_back(10);

	v2.push_back("ABC");
	v2.push_back("DEF");
	v2.push_back("GHI");
	v2.push_back("JKL");
	v2.push_back("MNO");
	v2.push_back("PQR");

	unsigned int i;

	for (i = 0; i < v1.size(); i++)
	{
		cout << "v1[" << i << "]=" << v1[i] << endl;
	}

	for (i = 0; i < v2.size(); i++)
	{
		cout << "v2[" << i << "]=" << v2[i] << endl;
	}

	cout << "v1 Capacity = " << v1.capacity() << endl;
	cout << "v2 Capacity = " << v2.capacity() << endl;

	return 0;
}





