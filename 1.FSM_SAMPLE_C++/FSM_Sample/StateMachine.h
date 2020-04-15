#pragma once
#include "State.h"
class StateMachine
{
private:
	State* mState[10];
	State* mNowState;
	int mStateCount;
public:
	StateMachine();
	void UpdateState();
	void UpdateStateList();
	void Change(State* _state);
	void Add(State* _state);
};