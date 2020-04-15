#pragma once
#include <iostream>

class State
{
private:
	char name[20];
public:
	State();
	State(const char* _name);
	const char* GetName();
	void Update();
	void Enter();
	void Exit();
};