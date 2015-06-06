/**
 * Project Untitled
 */


#include "KT_Modifier.h"

/**
 * KT_Modifier implementation
 */

KT_Modifier::KT_Modifier(){
	Static = false;
	Abstract = false;
	Final = false;
	visibility = 0;
}

/**
 * @return bool
 */
bool KT_Modifier::isStatic() {
    return Static;
}

/**
 * @return bool
 */
bool KT_Modifier::isAbstract() {
    return Abstract;
}

/**
 * @return bool
 */
bool KT_Modifier::isFinal() {
    return Final;
}

/**
 * @return bool
 */
int KT_Modifier::getVisibility() {
    return visibility;
}

/**
* @param bool
*/
void KT_Modifier::setStatic(bool var) {
	Static = var;
}

/**
* @param bool
*/
void KT_Modifier::setAbstract(bool var) {
	Abstract=var;
}

/**
* @param bool
*/
void KT_Modifier::setFinal(bool var) {
	Final=var;
}

/**
 * @param int
 */
void KT_Modifier::setVisibility( int var) {
	visibility=var;
}

void KT_Modifier::toString(){
	if (visibility==1)
		cout << "Public ";
	if (visibility == 3)
		cout << "Private ";
	if (visibility == 2)
		cout << "Protected ";
	if (isFinal())
		cout << "Final ";
	if (isAbstract())
		cout << "Abstract ";
	if (isStatic())
		cout << "Static ";
}		