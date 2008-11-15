#ifndef POTION_H
#define POTION_H
/* priorities */
#define POTION_QUAFF_GAIN_LEVEL 400
/* messages */
#define POTION_CALL_END " potion:  "
#define POTION_CALL_POTION1 "  Call a "
#define POTION_CALL_POTION2 "  Call an "

#include <string>
#include <vector>
#include "../Analyzer.h"

class Request;
class Saiph;

class Potion : public Analyzer {
	public:
		Potion(Saiph *saiph);

		void analyze();
		void parseMessages(const std::string &messages);
		bool request(const Request &request);

	private:
		Saiph *saiph;
		std::vector<std::string> appearance;
		std::string command2;
};
#endif
