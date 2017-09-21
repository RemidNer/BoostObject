#include "BoostObject.h"
#include <iostream>
#include <string>


void case10()
{
	std::string  S1xe("QAQ/QWQ/wa!QAQ");

	for (auto WomenWear : S1xe)
	{
		std::cout << WomenWear;
	}
	std::cout << std::endl;
}

using namespace std;
int main(int argc, char *argv[])
{
	string ps("  A Test Object For Boost Library  ");
	string pi("1234");
	
	boost::shared_ptr<BoostObject> bj = boost::make_shared<BoostObject>(ps);

	string ptr = bj->OutputFormat(ps);
	cout << "OutputFormat result: " << ptr << endl;

	int result = 0;;
	bj->TypeCast(pi, 0, result);
	cout << "TypeCast result is: " << result << endl;

	string str = bj->SwitchCase(ps, 0);
	cout << "Switch case result: " << str << endl;

	system("pause");
}