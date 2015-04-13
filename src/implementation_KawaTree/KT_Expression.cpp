/**
 * Project kawa
 */


#include "KT_Expression.h"
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;

/**
 * KT_Expression implementation
 */

 KT_Expression::KT_Expression() {}

/**
 * @param ExprVisitor
 */
void KT_Expression::accept( /*ExprVisitor*/) {

}

/**
 * @return string *
 */
string* KT_Expression::calculReturnType() {
    return returnType;
}