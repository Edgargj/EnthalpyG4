#include <cstdlib>
#include <iostream>
using std::cout;

#include "method.h"
#include "enthalpyg4.h"

double Method::ComputeEnthalpy(EnthalpyInputData &input) {
   
   if ( input.method==string("G4") ) {
      EnthalpyG4 g4;
	return g4.EnthalpyResult(input);
   } 
   return 0.0e0;
}

