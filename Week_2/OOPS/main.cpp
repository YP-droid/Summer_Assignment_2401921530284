#include <iostream>
#include "instrument.h"

using namespace music;
using namespace music::string;
using namespace music::wind;

int main(){
 	
 	//create instance of veena and call play()
 	Veena v;
 	std::cout<<"--Veena--"<<'\n';
 	v.play();

 	//create instance of Saxophone and call play()
 	Saxophone s;
 	std::cout<<"--Saxophone--"<<'\n';
 	s.play();

 	//polymorphism
 	Playable* instrumentptr;
 	std::cout<<"--Polymorphism--"<<'\n';
 	instrumentptr = &v;
 	instrumentptr->play();

 	instrumentptr = &s;
 	instrumentptr->play();

 	return 0;
}