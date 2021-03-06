#include "ServerObject.h"
#include "ServerObjectManager.h"

ServerObject::ServerObject(uint id) {
	this->id = id;
	flags = 0;

	//Set default flags
	setFlag(IS_FALLING, true);
}


ServerObject::~ServerObject(void) {
	SOM::get()->freeId(id);
}
