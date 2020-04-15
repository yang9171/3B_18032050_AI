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
	std::cout << "Update : ���� ���´� " << name << " �Դϴ�.\n" << std::endl;
}

void State::Enter()
{
	std::cout << "Enter : " << name << " ���¿� ���Խ��ϴ�.\n" << std::endl;
}

void State::Exit()
{
	std::cout << "Exit : " << name << " ���¿��� �������ϴ�.\n" << std::endl;
}