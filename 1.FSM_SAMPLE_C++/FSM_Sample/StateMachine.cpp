#include "StateMachine.h"

StateMachine::StateMachine()
{
	mStateCount = 0;
	mNowState = nullptr;
}

void StateMachine::UpdateState()
{
	mNowState->Update();
}

void StateMachine::UpdateStateList()
{
	std::cout << "#################################" << std::endl;
	std::cout << "현재 목록에 있는 상태 이름" << std::endl;
	for (int i = 0; i < mStateCount; i++)
	{
		std::cout << mState[i]->GetName() << std::endl;
	}
	std::cout << "#################################\n" << std::endl;
}

void StateMachine::Change(State* _state)
{
	mNowState->Exit();
	mNowState = _state;
	mNowState->Enter();
}

void StateMachine::Add(State* _state)
{
	mState[mStateCount++] = _state;
	if (mNowState == nullptr)
		mNowState = _state;
}