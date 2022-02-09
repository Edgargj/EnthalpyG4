# EnthalpyG4

EnthalpyG4 is a program that calculates the enthalpies of formation (by the Gaussian09 G4 method) of gaseous atoms at 0 K and thermal corrections for elements in their standard state at 298.16 K from: NIST-JANAF Thermochemical Tables J. Physics Chem. Data Monograph 9, 1998, 1-1951.

# Git instructions

You can obtain the source code of EnthalpyG4 as follows.
In your bash terminal type:

~~~~~~~~~~
$cd /local/path/to/EnthalpyG4
$git clone https://github.com/Edgargj/EnthalpyG4.git
~~~~~~~~~~

After this, git will transfer the source files to ```/local/path/to/EnthalpyG4```

## Auxiliary programs/dependencies
The following dependencies are needed:

~~~~~~~~~~
g++ std=c++11 make
~~~~~~~~~~

## Installation
For installing the program, type:

~~~~~~~~~~
$cd /local/path/to/EnthalpyG4
$make
~~~~~~~~~~

# Testing the suite

How to test the program (or how it should be):

~~~~~~~~~~
$./compute-enthalpy-atG4.cc CH3OH-G4.txt

===================================================================================================
                      New calculation of molecular enthalpies of formation                         
                                                                                                   
              Enthalpies of formation of gaseous atoms at 0 K and thermal corrections              
                       for elements in their standard state at 298.16 K from:                      
                                                                                                   
       NIST-JANAF Thermochemical Tables J. Physics Chem. Data Monograph 9, 1998, 1-1951.           
===================================================================================================
                                                                                                   
                                                                                                   
                                                                                                   
Heats of formation: 
0K          -190.11 kJ mol-1
0K          -45.41 kcal mol-1
                                                                                                   
Using Nicolaides method: 
298K        -201.21 kJ mol-1
298K        -48.06 kcal mol-1
                                                                                                   
Using G4 Enthalpy: 
298K        -201.21 kJ mol-1
298K        -48.06 kcal mol-1
                                                                                                   
===================================================================================================
~~~~~~~~~~

