#pragma once
#include <queue>
class Task;
//��������
class TaskContainer
{
public:
	TaskContainer();
	~TaskContainer();
	void push(Task *);//����һ������
	Task* top();//��ȡ���ж�������
	void pop();//����һ������
	std::priority_queue<Task*>::size_type size();//�������������Ĵ�С
private:
	std::priority_queue<Task*> task_container_;
};

