/*Write a program to determine whether the 
  entered character is in uppercase or lowercase,
  or is an invalid character.
  Print
  1 for uppercase
  0 for lowercase 
 -1 for any other character (special characters or others)
  */

#include<iostream>

using namespace std;

int main(){

	char character;
	cin>>character;

	int x = (character >='A' && character <='Y') ? 1 : (character >='a' && character <='y') ? 0 : -1;
	cout<<x;

	return 0;
}