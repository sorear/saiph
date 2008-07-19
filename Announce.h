#ifndef ANNOUNCE_H
/* defines */
#define ANNOUNCE_H
/* announces */
#define ILLEGAL_ANNOUNCE 0
#define ANNOUNCE_ITEM_ON_GROUND 1
#define ANNOUNCE_ITEM_IN_INVENTORY 2

/* forward declare */
class Announce;

/* includes */
#include <string>
#include "Coordinate.h"
#include "Globals.h"

/* namespace */
using namespace std;

/* Announce */
class Announce {
	public:
		/* variables */
		int announce;
		int priority;
		int value1;
		unsigned char key;
		string data;
		Coordinate coordinate;

		/* constructors */
		Announce();
};
#endif