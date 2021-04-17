#include "txtHandler.h"


// public
txtHandler* newTxtHandler(char* name) {
	txtHandler* new = defaultTxtHandler();
	
	return (new == NULL)? 
		new : _newTxtHandler(new, name);
} // end newTxtHandler


// private
txtHandler* _newTxtHandler(char* name) {

} // end _newTxtHandler
