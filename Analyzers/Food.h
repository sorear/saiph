#ifndef FOOD_H
/* defines */
#define FOOD_H
/* some text */
#define FOOD_CORPSE " corpse"
#define FOOD_CORPSES " corpses"
#define FOOD_EAT_IT_1 "  There is "
#define FOOD_EAT_IT_2 " here; eat it? "
#define FOOD_EAT_ONE_1 "  There are "
#define FOOD_EAT_ONE_2 " here; eat one? "
#define FOOD_IS_KILLED " is killed!  "
#define FOOD_YOU_KILL "  You kill the "
/* how old corpses may be */
#define FOOD_CORPSE_EAT_TIME 30
/* priorities */
#define FOOD_EAT_CORPSE_PRIORITY 435
#define FOOD_PICKUP_PRIORITY 425
#define FOOD_EAT_HUNGRY_PRIORITY 350
#define FOOD_EAT_WEAK_PRIORITY 525
#define FOOD_EAT_FAINTING_PRIORITY 750
#define FOOD_PRAY_FOR_FOOD 950

/* forward declare */
class Food;

/* includes */
#include <map>
#include <string>
#include <vector>
#include "../Analyzer.h"
#include "../Globals.h"
#include "../Request.h"
#include "../Saiph.h"

/* namespace */
using namespace std;

/* monitors health */
class Food : public Analyzer {
	public:
		/* constructors */
		Food(Saiph *saiph);

		/* methods */
		void finish();
		void parseMessages(const string &messages);

	private:
		/* variables */
		Saiph *saiph;
		string command2;
		vector<string> eat_order;
		map<string, bool> inedible_corpses;
		map<Point, bool> safe_monster;
		map<Point, int> safe_to_eat;
		Request req;
};
#endif
