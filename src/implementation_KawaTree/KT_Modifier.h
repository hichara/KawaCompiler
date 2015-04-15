/**
 * Project Untitled
 */


#ifndef _KT_MODIFIER_H
#define _KT_MODIFIER_H
#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;

enum VISIBILITY{
	PUBLIC,
	PROTECTED,
	PRIVATE
};

class KT_Modifier {
public: 
    
    KT_Modifier();

    bool isStatic();
    
    bool isAbstract();
    
    bool isFinal();
    
    int getVisibility();
    
    /**
     * @param bool
     */
    void setStatic(bool var);
    
    /**
     * @param bool
     */
    void setAbstract(bool var);
    
    /**
     * @param bool
     */
    void setFinal(bool var);
    
    /**
     * @param int
     */
    void setVisibility(int var);

	void toString();
    
private: 
    bool Static;
    bool Abstract;
    bool Final;
    int visibility;
};

#endif //_KT_MODIFIER_H