
/*
Full Name: VLADOI MARIAN
Pengo Account Name: mvladoi
Email: vladoimarian@yahoo.com
File Name: 19-5
Assignment 5: Splat The Schmoo
Description : This program is a Schmoo game.
              Schmoos are imaginary creatures who love being splatted with juicy mud balls.  
Code Status: working/tested
The program compile with no error and warnings
**/




#include <iostream>
#include <cmath>

#include "SchmooList.h"

using std::cout;
using std::endl;



SchmooList::SchmooList()
{
  first = 0;
  last = 0;
  population = 0;
  mudArea = 5.0;
  deleteSchmooArea = 1.0;
}




SchmooList::~SchmooList()
{
  LinkNode* temp;
  while(first != 0)
    {
      temp = first;
      first = first->next;
      delete temp;
    }
}





bool SchmooList::isEmpty()
{

  return (first == 0);
}





void SchmooList::insertFront(Schmoo& schmooObject)
{
  LinkNode* temp;
  temp = new LinkNode(schmooObject);
  if(isEmpty())
    {
      first = last = temp;
      population++;

    }

  else
    {
      first->previous = temp;
      temp->next = first;
      first = temp;
      population++;
    }

}






void SchmooList::getPopulation()
{
  cout << "Final Schmoo population is " << population <<"."<<endl;
}






double SchmooList::calculateDistance(double x1Value, double y1Value, double x2Value, double y2Value)
{
  return sqrt(pow((x1Value - x2Value),2) + pow((y1Value - y2Value), 2));

}







void SchmooList::throwMudAt(double xVal, double yVal)
{
  LinkNode*temp;
  double distance;
  temp = first;
  while(temp != 0)
    {
        distance =
	  calculateDistance(temp->schmooPtr->schmooGetX(), temp->schmooPtr->schmooGetY(), xVal, yVal);
        if(checkMudArea(distance))
	  {
            temp->schmooPtr->increaseMud();
	  }
        temp = temp->next;
    }

}






void SchmooList::printAll()
{
  LinkNode*temp;
  temp = first;
  if(isEmpty())
    {
      cout << "Can not print an empty list" << endl;
    }

  while(temp != 0)
    {
      temp->schmooPtr->outputSchmoo();
      temp = temp->next;
    }

}







void SchmooList::removeAt(double xVal, double yVal)
{
  if(isEmpty())
    {
      cout << "You can not delete from an empty list." << endl;
    }

  else
    {
      LinkNode* temp;
      LinkNode* previousTemp;
      temp = last;
      previousTemp = last->previous;
      double distance;

      //if there are more than 1 node
      while(population != 1 && previousTemp!=0)
        {
            distance =
	      calculateDistance(temp->schmooPtr->schmooGetX(), temp->schmooPtr->schmooGetY(), xVal, yVal);
            if(checkDeleteArea(distance))
	      {//deleting last node
                if(temp->next==0)
		  {
                    last = previousTemp;
                    last->next = 0;
                    delete temp;
                    population--;
                    temp = previousTemp;
                    previousTemp = previousTemp->previous;
		  }//deleting a node in the middle
                else
		  {
                    previousTemp->next = temp->next;
                    temp->next->previous = temp->previous;
                    delete temp;
                    population--;
                    temp = previousTemp;
                    previousTemp = previousTemp->previous;
		  }
	      }
	    //the node should not be deleted
            else
	      {
                temp = previousTemp;
                previousTemp = previousTemp->previous;

	      }
        }



      //deleting first node
      if(previousTemp == 0 && population > 1){
            distance =
	      calculateDistance(temp->schmooPtr->schmooGetX(), temp->schmooPtr->schmooGetY(), xVal, yVal);
            if(checkDeleteArea(distance)){
	      first = temp->next;
	      temp->next->previous = 0;
	      delete temp;
	      population--;
            }
      }


      // deleting all nodes
      if(population == 1)
        {
            distance =
	      calculateDistance(temp->schmooPtr->schmooGetX(), temp->schmooPtr->schmooGetY(), xVal, yVal);
            if(checkDeleteArea(distance))
	      {
                first = last = 0;
                delete temp;
                population--;
	      }
        }



    }
}





bool SchmooList::checkDeleteArea(double distance){

  if (distance < deleteSchmooArea)
      return true; 
  else if (((distance+error) >= deleteSchmooArea) && ((distance-error) <= deleteSchmooArea))
    return true;
    else 
  return false;
 }




bool SchmooList::checkMudArea(double distance){

  if (distance < mudArea)
    return true;
  else if(((distance+error) >= mudArea) && ((distance-error) <= mudArea))
    return true;
    else 
  return false;
}


