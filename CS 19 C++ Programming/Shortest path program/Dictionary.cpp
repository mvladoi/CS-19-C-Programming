/**
FULL NAME: VLADOI MARIAN
PENGO ACCOUNT NAME: mvladoi
EMAIL: vladoimarian@yahoo.com
FILENAME: 21-2
ASSIGNMENT 2: Integer Minimum Heap and Priority Queue
DESCRIPTION: Create a minimum heap that stores integers and implements a minimum priority queue
CODE STATUS: working/tested
THE PROGRAM COMPILE WITH NO ERRORS AND WARNINGS
*/




#include <fstream>
#include <cstdlib>
#include "Dictionary.h"

using namespace std;

Dictionary::Dictionary(string fileName)
{
  container = new WNodePtrVector;
  adjacentWordsVector = new VecOfWNodePtrVector;


  ifstream inFile(fileName.c_str());
  string data;
  WNodePtr temp = 0;
  if(inFile.fail())
    {
      cerr << "Class Dictionary reported failing opening of the text file";
      exit(1);
    }

  while(inFile >> data)
    {
      if(data.length() != 5)
        {
	  cerr << "Illegal word length" << endl;
        }
      temp = new WNode(data);
      container->push_back(temp);

    }

  inFile.close();



}







bool Dictionary::compareWords(string firstString, string secondString)
{
  int countt = 0;
  for(int i = 0; i < 5; i++)
    {
      if(firstString[i] != secondString[i])
	countt++;
    }
  if(countt == 1)
    return true;
  else
    return false;

}








void Dictionary::addAdjWords(){

  WNodePtrVector tempVector;
  WNodePtr tempPtr = 0;


  for(unsigned int n = 0; n < adjacentWordsVector->size(); n++){


    for(unsigned int i = 0; i < adjacentWordsVector->at(n).size(); i++){



      for(unsigned int j = 0; j < container->size(); j++){
        if(compareWords(adjacentWordsVector->at(n)[i]->word, container->at(j)->word)){
          tempPtr = new WNode(container->at(j)->word);
          tempPtr->link = adjacentWordsVector->at(n)[i];

	  if(tempPtr->word == "bacon"){
            WNodePtr printPtr = tempPtr;
            while(printPtr !=0){
	      cout << printPtr->word << endl;
	      printPtr = printPtr->link;
		  }

            exit(1);
	  }

          tempVector.push_back(tempPtr);
          deleteWordFromContainer(container->at(j), j);

	}




      }


      if(tempVector.size() != 0){
	adjacentWordsVector->push_back(tempVector);
	tempVector.clear();
      }

    }



  }

  cout << "No path from " << inputWord->word << " to bacon." << endl;

}





void Dictionary::setInputWord(string inputString){

  WNodePtr temp  = new WNode(inputString);
  inputWord = temp;
  WNodePtrVector tempVec;
  tempVec.push_back(temp);
  adjacentWordsVector->push_back(tempVec);


  for(unsigned int i = 0 ; i < container->size(); i++){
    if(container->at(i)->word == inputString)


      deleteWordFromContainer(temp, i);
  }

}






void Dictionary::deleteWordFromContainer(WNodePtr data, int pos){
  container->at(pos)->word = container->at(container->size()-1)->word;
  container->at(container->size()-1)->word = data->word;
  container->pop_back();
}








Dictionary::~Dictionary()
{
  if(adjacentWordsVector != 0)
    delete adjacentWordsVector; adjacentWordsVector = 0;
}
