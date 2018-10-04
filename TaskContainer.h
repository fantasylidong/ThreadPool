#pragma once
#include <queue>
class Task;
//任务容器
class TaskContainer
{
public:
	TaskContainer();
	~TaskContainer();
	void push(Task *);//增加一个任务
	Task* top();//获取队列顶端任务
	void pop();//弹出一个任务
	std::priority_queue<Task*>::size_type size();//返回任务容器的大小
private:
	std::priority_queue<Task*> task_container_;
};

