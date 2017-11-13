/*
 * =====================================================================================
 *
 *       Filename:  star.cpp
 *
 *    Description:  Printing stars in several ways
 *
 *        Version:  1.0
 *        Created:  11/13/2017 11:57:21 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Mohammadreza Moghimi  
 *
 * =====================================================================================
 */
#include <iostream>
using namespace std;

int num, s, y;

void star();
void space();
void input();
void one();
void end();
void body();

int main()
{
	int row;
	cout << "\tI can print triangles with stars in several ways, my style menu is:"<< endl;
	cout <<   "\t\t   (a)   \t(b)              (c)"<< 
	       	"\n\t\t    *    \t *                *"<<
		"\n\t\t   * *   \t **              **"<<
		"\n\t\t  *   *  \t ***            ***"<<
		"\n\t\t *     * \t ****          ****"<<
		"\n\t\t*********\t *****        *****"<<
		"\n\t\t" << endl;
	cout << "Which type of style do you want : ";
	char selection;
	cin >> selection;

	switch (selection)
	{
		case 'a':
			/* Start > It's about Isosceles Triangle with no stars in it */
			cout << "Enter the height of your triangle here"<< endl;
			input();
			one();
			cout << endl;
			body();
			end();
			cout << endl;
			/* End > Isosceles Triangle */
			break;
		
		case 'b':
			cout << "Enter the height of your triangle here: "<< endl;
			int height;
			cin >> height;
			cout << endl;

			for (int j=1; j <= height; j++)
			{
				for (int i=1; i <= j; i++)
					cout << "*";
				cout << endl;
			}
			break;

		case 'c':
			cout << "Enter the height of your triangle here: "<< endl;
			int height2;
			cin >> height2;
			cout << endl;

			for (int i=1; i <= height2; i++)
			{
				for (int j=1; j <= height2 - i; j++)
					cout << " ";
				for (int k=1; k <= i; k++)
					cout << "*";
				cout << endl;
			}
			break;

		default:
			cout << "Your Entry is wrong!!!" << endl;
	}

	

	return 0;
}

/* 
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
 * ^^^^^^   function border	^^^^^
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
 */

/* Start > Isosceles Fuctions */
void star()
{
	cout << "*";
}

void space()
{
	cout <<" "; 
}

void input()
{
	cin >> num;
	s = num + (num -1);
	y = (s/2) + 1;
}

void one()
{
	for (int i = 1; i <= s; i++)
	{
		if (i == y)
			star();
		else
			space();
	}
}

void end()
{
	if (num != 1)
		for ( int i = 1; i <= s; i++ )
			star();
}

void body()
{
	for ( int z=1; z <= y-2; z++ )
	{
		for ( int b=1; b <= s; b++ )
		{
			if ( b == y+z || b == y-z )
				star();
			else
				space();
		}
		cout << endl;
	}
}
/* End > Isosceles Fuction */
