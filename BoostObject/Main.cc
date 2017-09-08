#include "BoostObject.h"

using namespace std;
int main(int argc, char *argv[])
{
	string ps("  A Test Object For Boost Library  ");
	string pi("1234");
	BoostObject bj;

	int result = 0;
	bj.TypeCast(pi,0,result);
	cout << "Int Result: " << result << endl;

	string ptr = bj.OutputFormat(ps);
	cout << "OutputFormat: " << ptr << endl;

	cout << "Case Conversion: " << bj.SwitchCase(ps, 1) << endl;

	system("pause");
}