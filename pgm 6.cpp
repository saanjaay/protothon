#include <stdio.h>
#include <ctype.h>
#include<iostream>
using namespace std;
int main ()
{
  int i=0;
  cout<<"enter the strinf :";
	char s[256],c;
	cin.getline(s,256);
  while (s[i])
  {
    c=s[i];
    putchar (toupper(c));
    putchar (tolower(c));
    i++;
  }
  return 0;
}