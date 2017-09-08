#include "BoostObject.h"

using namespace std;
using namespace boost;
using boost::io::group;
using namespace boost::assign;

BoostObject::BoostObject(const string& str)
{
	if (str.empty())
	{
		cout << "The str is null..." << endl;
	}
	ptr = str;
	cout << "This Constructor str Content is: " << ptr << endl;
}

TypeV BoostObject::TypeCast(const string &str, int type, int &result)
{
	cout << "In TYpeCast int,Type value is: " << type << endl;
	if (type != 0)
	{
		cout << "The type value is Error,Please check it and try again!" << endl;
		return;
	}
	result = lexical_cast<int>(str);
}

TypeV BoostObject::TypeCast(const string &str, int type, long &result)
{
	cout << "In TypeCast Long,Type value is: " << type << endl;
	if (type != 1)
	{
		cout << "The type value is Error,Please check it and try again!" << endl;
		return;
	}
	result = lexical_cast<long>(str);
}

TypeV BoostObject::TypeCast(const std::string &str, int type, float &result)
{
	cout << "In TypeCast float,Type value is: " << type << endl;
	if (type != 1)
	{
		cout << "The type value is Error,Please check it and try again!" << endl;
		return;
	}
	result = lexical_cast<float>(str);
}

TypeV BoostObject::TypeCast(const std::string &str, int type, double &result)
{
	cout << "In TypeCast double,Type value is: " << type << endl;
	if (type != 1)
	{
		cout << "The type value is Error,Please check it and try again!" << endl;
		return;
	}
	result = lexical_cast<double>(str);
}

TypeS BoostObject::OutputFormat(const std::string &str)
{
	if (str.empty())
	{
		cout << "In OutputFormat Function,param is ineffectiveness" << endl;
		return NULL;
	}
	format fmt("|***| %s |***|");

	fmt % trim_copy(str);
	string ps = fmt.str();
	
	return ps;
}

TypeS BoostObject::SwitchCase(const std::string& str, int type)
{
	if (str.empty())
	{
		cout << "In SwitchCase Function,param is ineffectiveness" << endl;
		return NULL;
	}
	switch(type)
	{
	case 0:
	{
		std::string tuc = to_upper_copy(str);
		return tuc;
		break;
	}
	case 1:
	{
		std::string tl = str;
		to_lower(tl);
		return tl;
		break;
	}
	default:
		break;
	}
	return NULL;
}

BoostObject::~BoostObject()
{
	cout << "Destructor..." << endl;
}


