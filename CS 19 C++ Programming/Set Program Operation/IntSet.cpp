  


#include "IntSet.h"


IntSet::IntSet(int firstEl, int secondEl, int thirdEl, int fourthEl, int fifthEl){
  for(int i=0; i<=MAXSETVAL; i++){
    data[i]=false;
  }
  insertElement(firstEl);
  insertElement(secondEl);
  insertElement(thirdEl);
  insertElement(fourthEl);
  insertElement(fifthEl);
}





void IntSet::insertElement(int element){
  if(element>=0 && element<=MAXSETVAL){
    data[element]=true;
  }
} 





void IntSet::deleteElement(int element){
  if(element>=0 && element<= MAXSETVAL){
    data[element]= false;
  }
}






bool IntSet::hasElement(int element)const{
  if(element>=0 && element<=MAXSETVAL){
    return data[element];
  }
  return false;
}






void IntSet::unionOf(IntSet &FirstSet, IntSet &SecondSet){
  for(int i=0; i <= MAXSETVAL; i++){
    data[i] = (FirstSet.data[i] || SecondSet.data[i]);
  }
}






void IntSet::intersectionOf(IntSet &FirstSet, IntSet &SecondSet){
  for(int i=0; i <= MAXSETVAL; i++){
    data[i]= (FirstSet.data[i] && SecondSet.data[i]);
  }
}







bool IntSet::equals(IntSet &OtherSet)const{
  for(int i=0; i<=MAXSETVAL; i++){
    if(data[i] != OtherSet.data[i]){
      return false;
    }
  }
    return true;
}







std::string IntSet::toString()const{
  std::stringstream buffer;
  bool initial = true;
  buffer <<"{";

  for(int i=0; i<=MAXSETVAL; i++){
    if(data[i]){
      if(initial){
	buffer <<i;
	initial = false;
      }
    
      else{
	buffer <<", "<<i;
      }
    }
  }

      buffer <<"}";   
      return buffer.str();
}

