#include "BoostObject.h"

using namespace std;
int main(int argc, char *argv[])
{
	string ps("  A Test Object For Boost Library  ");
	string pi("1234");
	
	shared_ptr<BoostObject> bj = make_shared<BoostObject>(ps);

	string ptr = bj->OutputFormat(ps);
	cout << "OutputFormat result: " << ptr << endl;

	int result = 0;;
	bj->TypeCast(pi, 0, result);
	cout << "TypeCast result is: " << result << endl;

	string str = bj->SwitchCase(ps, 0);
	cout << "Switch case result: " << str << endl;


	system("pause");
}