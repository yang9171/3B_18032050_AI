#define _CRT_SECURE_NO_WARNINGS
#include "State.h"

State::State()
{
	strcpy(name, "null");
}

State::State(const char* _name)
{
	strcpy(name, _name);
}

const char* State::GetName()
{
	return name;
}

void State::Update()
{
	std::cout << "Update : 현재 상태는 " << name << " 입니다.\n" << std::endl;
}

void State::Enter()
{
	std::cout << "Enter : " << name << " 상태에 들어왔습니다.\n" << std::endl;
}

void State::Exit()
{
	std::cout << "Exit : " << name << " 상태에서 나갔습니다.\n" << std::endl;
}