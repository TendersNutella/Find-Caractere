#ifndef DEF_MOT
#define DEF_MOT

#include <string>
#include <iostream>


class Mot
{
private:

	std::string mot;

public:
	void begin();
	void end();


	Mot(std::string mot);
};


#endif // !DEF_MOT
