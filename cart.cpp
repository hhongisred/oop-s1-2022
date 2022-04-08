#include "cart.h"
#include "meerkat.h"
#include <iostream>
#include <string>
#pragma once

using namespace std;

cart::cart() {
	max = 4;
	curNum = 0;
}

bool cart::addMeerkat(meerkat cat) {
	if (curNum>=4){
		return false;
	}
	meercart[curNum] = cat;
	curNum++;

	return true;
	
	
}   // adds a meerkat to the cart, returns false if full
void cart::emptyCart() {
	curNum= 0;
}               // remove all meerkats from the cart
void cart::printMeerkats() {
	for (int i = 0; i < curNum; i++){
		cout <<meercart[i].getName() << " " << meercart[i].getAge() << endl;
	}
}