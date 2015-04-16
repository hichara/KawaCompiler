/**
 * Project kawa
 */


#include "KT_ID.h"
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;

/**
 * KT_ID implementation
 */

KT_ID::KT_ID() {}
 
/**
 * @return vector<string *>
 */
vector<string*> KT_ID::getValue() {
    return this-> value;
}

/**
 * @return void
 */
void KT_ID::setValue(vector<string*>& var){
    this-> value=var;
}