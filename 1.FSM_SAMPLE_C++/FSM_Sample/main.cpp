#include "StateMachine.h"
#include "State.h"

int main()
{
	StateMachine* statemachine = new StateMachine(); 
	State* StateIdle = new State("Idle");
	State* StateAttack = new State("Attack");
	State* StateWalk = new State("Walk"); //상태 3개 생성

	statemachine->Add(StateIdle);
	statemachine->Add(StateAttack);		//상태 추가
	statemachine->Add(StateWalk);

	statemachine->UpdateStateList();	//현재 상태 리스트 출력

	statemachine->Change(StateAttack);	//Attack 으로 상태 변환

	statemachine->Change(StateWalk);	//Walk 로 상태변환
	statemachine->UpdateState();		//현재 상태 출력

	statemachine->Change(StateIdle);	//idle로 상태 변환

	system("pause");
	return 0;
}