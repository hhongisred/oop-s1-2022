#ifndef CART_H 
#define CART_H 
#include <iostream> 
#include "meerkat.h" 
class cart  
{ 
    public: 
        int max; 
        int curNum; 
        meerkat meercart[4];
        cart();  
        void printMeerkats(); 
        bool addMeerkat(meerkat cat);  
        void emptyCart();   
         
}; 
#endif