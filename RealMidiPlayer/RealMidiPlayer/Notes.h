#ifndef NOTES_H
#define NOTES_H
#include <iostream>

class Notes
{
private:
	int recvArray[3];
	const int maxSection = 13;
	float sections[13];
public:
	Notes();
	void section_Calculator();
	int noteAssigner();
};
#endif