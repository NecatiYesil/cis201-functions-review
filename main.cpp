/**
file: main.cpp
description: it takes a string input and counts how many character of 'a' there is.
author: necati murat yesil
DoC: 10/16/18
**/

#include<iostream>
#include <string>

using namespace std;

int police(string s);

bool is_a(char a);

int main()
{                            
	string s;                 
	cout << "Enter a string: ";   // asks user to input a string.
	cin >> s;
    cout <<"there are " << police(s) <<" many 'a's in your input"  << endl;
//prints how many a's in there.
    return 0;
}

int police(string s)    //function for to find a characters.
{
    int count = 0;
    int n = s.length();
    
    for( int i=0; i<n; i++)
    {
        if(is_a(s.at(i)))
        {
            count ++;
        }
        
    }

    return count;
}
 

bool is_a( char a)   // it is a checker for if statement in police function.
{
    return a == 'a' || a == 'A';
}


































