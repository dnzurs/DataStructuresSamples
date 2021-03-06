/*
 * runtime.cpp
 *
 *      Author: Nebi Deniz Uras
 *      Number: 507181527
 */

 //============================================================================//
 //
 //	File Name	: runtime.cpp
 //	Description	: Data Structures Bonus Homework
 //
 //============================================================================//

 //============================================================================//
 //=============================== INCLUDES ===================================//
 //============================================================================//
#include "runtime.h"
#include <iostream>

 //============================================================================//
 //==========================  MACRO DEFINITIONS ==============================//
 //============================================================================//
#define FILE_NAME_LENGTH			(256)
#define TURKISH_CHAR_COUNT			(12) 
#define TURKISH_CHAR_COUNT_CMDLINE	(7)  
#define CHARACTER_COUNT				(33) 

#define DEBUG						(0) // If it is 1, the unique letters of model are shown

 //============================================================================//
 //=========================== TYPE DEFINITIONS ===============================//
 //============================================================================//

 //============================================================================//
 //========================== FUNCTION PROTOTYPES =============================//
 //============================================================================//

 //============================================================================//
 //============================ GLOBAL VARIABLES ==============================//
 //============================================================================//

 //============================================================================//
 //============================ PRIVATE FUNCTIONS =============================//
 //============================================================================//
AddressValue executeStatement(	const Statement & statement, 
								const AddressValue currentAddress, 
								ScalarValue variables [5], 
								Stack<ScalarValue> & callStack, 
								const AddressValue addressOfCalleeIfCall, 
								bool & isDone )
{
    (void) variables;
    (void) callStack;
    (void) isDone;
    (void) addressOfCalleeIfCall;
    
    //Your entry point is here
    std::cout << "Executing " << statement.type << " at line " << currentAddress << std::endl;
    
    //Return what address you want to go next
    return currentAddress + 1;
}

//============================================================================//
//============================ PUBLIC FUNCTIONS ==============================//
//============================================================================//
int main(int argc, char *argv[])
{

#if _WIN32
	system("Pause");
#endif
	return 0;
}

//============================================================================//
//============================== CLASS FUNCTIONS =============================//
//============================================================================//