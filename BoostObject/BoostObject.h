#pragma once
#include <list>
#include <vector>
#include <string>
#include <iomanip>
#include <iostream>

#include <boost/assign.hpp>
#include <boost/format.hpp>
#include <boost/tokenizer.hpp>
#include <boost/shared_ptr.hpp>
#include <boost/make_shared.hpp>
#include <boost/lexical_cast.hpp>
#include <boost/typeof/typeof.hpp>
#include <boost/algorithm/string.hpp>

typedef double		TypeD;
typedef long		TypeL;
typedef void		TypeV;
typedef float		TypeF;
typedef int			TypeI;
typedef std::string TypeS;

class BoostObject
{
public:
	BoostObject() = default;

	BoostObject(const std::string &str);

	/************************************************************************/
	/* @param	 want to conversion str                                     */
	/* @param    cast type	0:string to int									*/
	/*						1:string to long								*/
	/*						2:string to float								*/
	/*						3:string to double								*/
	/* return	return a conversion result value							*/
	/************************************************************************/
	TypeV TypeCast(const std::string &str, int type,int &result);
	TypeV TypeCast(const std::string &str, int type, long &result);
	TypeV TypeCast(const std::string &str, int type, float &result);
	TypeV TypeCast(const std::string &str, int type, double &result);

	/************************************************************************/
	/*  @param	Incoming string												*/
	/*	return	A string that is processed in a particular format			*/
	/************************************************************************/
	TypeS OutputFormat(const std::string &str);

	/************************************************************************/
	/* @param	Incoming string												*/
	/* @param	cast type	0:case change uppercase							*/
	/*						1:Upper case									*/
	/* return	return a processed str										*/
	/************************************************************************/
	TypeS SwitchCase(const std::string& str, int type);




	~BoostObject();
private:
	std::string ptr;
};