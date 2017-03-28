#include <iostream>
#include <sstream>
#include "SchmooList.h"
#include "Schmoo.h"
#include "LinkNode.h"


using std::string;
using std::stringstream;
using std::cin;
using std ::cout;
using std:: endl;

string toLower(const string& processString);

int main()
{
  SchmooList listOfHappySchmoo;
  string line;
  stringstream sStreamLine;
  string firstComand;
  string secondComand;
  double xValue = 0;
  double yValue = 0;
  while(getline(cin, line))
    {
      sStreamLine.str("");
      sStreamLine.clear();
      sStreamLine << line;
      sStreamLine >> firstComand >> secondComand >> xValue >>yValue;


      firstComand = toLower(firstComand);
      secondComand = toLower(secondComand);


      if(firstComand == "add" && secondComand == "schmoo")
        {
	  Schmoo happySchmoo(xValue, yValue);
	  listOfHappySchmoo.insertFront(happySchmoo);
        }

      else if(firstComand == "throw" && secondComand == "mud")
        {
	  listOfHappySchmoo.throwMudAt(xValue, yValue);
        }
      else if(firstComand == "remove" && secondComand == "schmoo")
        {
	  listOfHappySchmoo.removeAt(xValue, yValue);
        }
    }

  cout <<"name:VLADOI MARIAN ,pengo account:mvladoi"<< endl;
  cout << "email:vladoimarian@yahoo.com, CS19, Assignment 5:Splat the Schmoo" << endl;
  listOfHappySchmoo.getPopulation();
  listOfHappySchmoo.printAll();

  return 0;

}



string toLower(const string& processString)
{
  string newString(processString);
  int stringSize = processString.length();
  for(int i = 0; i < stringSize; i++)
    {
      newString[i] = tolower(processString[i]);

    }

  return newString;
}
