//============================================================================
// Name        : Action.h
// Author      : AltF4
// Copyright   : GNU GPLv3
// Description : Represents any scheduled action that a unit makes, such as
//					attacks, healing, moving, etc...
//============================================================================

#ifndef ACTION_H_
#define ACTION_H_

#include <stdlib.h>

namespace LoF
{

class Action
{

public:
	//How many charge points gained per round
	uint speed;

	//The current charge level
	uint currentCharge;


	Action();

	//Trigger the action
	void Execute();

	//Returns true if action1 < action2
	static bool CompareActions(Action action1, Action action2);

};

}

#endif /* ACTION_H */
