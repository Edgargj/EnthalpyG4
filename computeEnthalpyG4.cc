#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <math.h>
#include "enthalpyinputdata.h"
#include "method.h"
#include "optflag.h"
#include "methodtype.h"
#include "enthalpyg4.h"

using std::string;

int main (int argc, char *argv[])
{
	string inputname=argv[1];

	//OptionFlags opt;
	//opt.getOptions(argc, argv);

	EnthalpyInputData datainput;
	datainput.ReadData(inputname);
	
	Method method;
	method.ComputeEnthalpy(datainput);
	
	return 0;
}
