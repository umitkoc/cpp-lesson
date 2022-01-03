#include <iostream>
#include <typeinfo>
using namespace std;

int main()
{
	int i;
    int j;
	char c;

	const type_info& ti1 = typeid(i);
	const type_info& ti2 = typeid(j);
	const type_info& ti3 = typeid(c);
	if (ti1 == ti2)
		cout << "i and j are of"
			<< " similar type" << endl;
	else
		cout << "i and j are of"
			<< " different type" << endl;

	if (ti2 == ti3)
		cout << "j and c are of"
			<< " similar type" << endl;
	else
		cout << "j and c are of"
			<< " different type" << endl;

	return 0;
}
