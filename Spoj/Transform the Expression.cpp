#include<iostream>
#include<ctype.h>
#include<string.h>
#include<cstdio>
using namespace std;
const int MAX = 400 ;
class infix
{
	private :
		char target[MAX], stack[MAX] ;
		char *s, *t ;
		int top ;
	public :
		infix( ) ;
		void setexpr ( char *str ) ;
		void push ( char c ) ;
		char pop( ) ;
		void convert( ) ;
		int priority ( char c ) ;
		void show( ) ;
} ;
infix :: infix( )
{
	top = -1 ;
	strcpy ( target, "" ) ;
	strcpy ( stack, "" ) ;
	t = target ;
	s = ""  ;
}
void infix :: setexpr ( char *str )
{
	s = str ;
}
void infix :: push ( char c )
{
		top++ ;
		stack[top] = c ;
}
char infix :: pop( )
{
	if ( top == -1 )
	{
		return -1 ;
	}
	else
	{
		char item = stack[top] ;
		top-- ;
		return item ;
	}
}
void infix :: convert( )
{
	while ( *s )
	{
		if ( *s == ' ' || *s == '\t' )
		{
			s++ ;
			continue ;
		}
		if ( isdigit ( *s ) || isalpha ( *s ) )
		{
			while ( isdigit ( *s ) || isalpha ( *s ) )
			{
				*t = *s ;
				s++ ;
				t++ ;
			}
		}
		if ( *s == '(' )
		{
			push ( *s ) ;
			s++ ;
		}
		char opr ;
		if ( *s == '*' || *s == '+' || *s == '/' || *s == '%' || *s == '-' || *s == '$' )
		{
			if ( top != -1 )
			{
				opr = pop( ) ;
				while ( priority ( opr ) >= priority ( *s ) )
				{
					*t = opr ;
					t++ ;
					opr = pop( ) ;
				}
				push ( opr ) ;
				push ( *s ) ;
			}
			else
				push ( *s ) ;
			s++ ;
		}
		if ( *s == ')' )
		{
			opr = pop( ) ;
			while ( ( opr ) != '(' )
			{
				*t = opr ;
				t++ ;
				opr =  pop( ) ;
			}
			s++ ;
		}
	}
	while ( top != -1 )
	{
		char opr = pop( ) ;
		*t = opr ;
		t++ ;
	}
	*t = '\0' ;
}
int infix :: priority ( char c )
{
	if ( c == '$' )
		return 3 ;
	if ( c == '*' || c == '/' || c == '%' )
		return 2 ;
	else
	{
		if ( c == '+' || c == '-' )
			return 1 ;
		else
			return 0 ;
	}
}
void infix :: show( )
{
	cout << target ;
}
int fun()
{
	char expr[MAX] ;
	infix q ;
	cin.getline ( expr, MAX ) ;
	q.setexpr ( expr ) ;
	q.convert( ) ;
	q.show( ) ;
	cout<<endl;
	return 0;
}
int main()
{
    int t,i;
    cin>>t;
    fflush(stdin);
    for(i=0;i<t;i++)
    {
        fun();
    }
    return 0;
}
