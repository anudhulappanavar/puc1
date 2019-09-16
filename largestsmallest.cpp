/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

https://www.onlinegdb.com/online_c++_compiler#

*******************************************************************************/

#include <iostream>
#include <conio.h>

using namespace std;

int main ()
{
  int a, b, c, l, sl, s;
  cout<<"enter 3 number \n";
  cin>>a>>b>>c;
  l = a;
  if (b>l)
  {
      l=b;
     
    }
  if (c>l)
      {
          l=c;
          
      }
	cout<<l;
	
	s=a;
	if (b<s)
	{
	    s=b;
	}
	if(c<a)
	{
	    s=c;
	}
	cout<<"\n"<< s;
	sl=(a+b+c)-(l+s);
	cout<<"\n"<<sl;
	
	
	return 0;
}
