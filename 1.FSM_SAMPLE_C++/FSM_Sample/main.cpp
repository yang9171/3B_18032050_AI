#include "StateMachine.h"
#include "State.h"

int main()
{
	StateMachine* statemachine = new StateMachine(); 
	State* StateIdle = new State("Idle");
	State* StateAttack = new State("Attack");
	State* StateWalk = new State("Walk"); //���� 3�� ����

	statemachine->Add(StateIdle);
	statemachine->Add(StateAttack);		//���� �߰�
	statemachine->Add(StateWalk);

	statemachine->UpdateStateList();	//���� ���� ����Ʈ ���

	statemachine->Change(StateAttack);	//Attack ���� ���� ��ȯ

	statemachine->Change(StateWalk);	//Walk �� ���º�ȯ
	statemachine->UpdateState();		//���� ���� ���

	statemachine->Change(StateIdle);	//idle�� ���� ��ȯ

	system("pause");
	return 0;
}