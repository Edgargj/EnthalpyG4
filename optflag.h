
#ifndef _OPTSFLAGS_H_
#define _OPTSFLAGS_H_
#include "enthalpyinputdata.h"


/* *********************************************************************************** */
class OptionFlags{
/* *********************************************************************************** */
public:

/* *********************************************************************************** */
	OptionFlags();
	bool beging;
	bool end;
	bool save;
		
	void getOptions(int &argc, char** &argv);
	void printHelpMenu(int &argc, char** &argv);

/* *********************************************************************************** */
};
/* *********************************************************************************** */


#endif /* _OPTSFLAGS_H_ */
