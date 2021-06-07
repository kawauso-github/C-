#include <string>
#include "prob3-2_twostrings.h"

void	TwoStrings::setString1( string str )
{
	m_string1 = str;
}

void	TwoStrings::setString2( string str )
{
	m_string2 = str;
}

string	TwoStrings::getString1()
{
	return( m_string1 );
}

string	TwoStrings::getString2()
{
	return( m_string2 );
}

string	TwoStrings::getConnectedString()
{
	string	str;

	str = m_string1;
	str.append( m_string2 );

	return( str );
}

int	TwoStrings::getConnectedLength()
{
	string	str;

	str = m_string1;
	str.append( m_string2 );

	return( str.length() );
}

